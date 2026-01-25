#!/usr/bin/env python3
import requests
import sys
import cv2
from bs4 import BeautifulSoup

def main():
    # Get URL and scrap image
    url = ''
    page = requests.get(url)
    soup = BeautifulSoup(page.content, "html.parser")
    images = soup.find_all("img", class_="imagen-portada")
    # Get the image
    for image in images:
        img_src = image["src"]
    #    print(img_src)
    response = requests.get(img_src)
    print(response.url)
    print(response.ok)
    print(response.status_code)
    with open("temp.jpg", mode = "wb") as file:
        file.write(response.content)
    # Display the image
    img = cv2.imread("temp.jpg", cv2.IMREAD_ANYCOLOR)
    while True:
        cv2.imshow("Preview", img)
        cv2.waitKey(0)
        sys.exit
    cv2.destroyAllWindows()

if __name__ == "__main__":
    main()
