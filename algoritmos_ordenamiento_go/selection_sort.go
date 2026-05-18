package main

import "fmt"

// Funcion de la logica del Selection Sort

func selectionSort(arr []int) {
	n := len(arr)

	for i := 0; i < (n - 1); i++ {
		// Se asume que la primer posicion
		// ya esta ordenada y es el elemento
		// mas chico
		minIdx := i

		// Se itera en el arreglo desordenado
		// para encontrar el valor minimo real
		for j := i + 1; j < n; j++ {
			if arr[j] < arr[minIdx] {
				// Cuando se encuentra, se
				// actualiza la variable
				minIdx = j
			}
		}
		// Se mueve el elemento mas chico a
		// su posicion correspondiente
		arr[i], arr[minIdx] = arr[minIdx], arr[i]
	} 
}

// Funcion para imprimir el arreglo

func printArray(arr []int) {
	n := len(arr)
	for i := 0; i < n; i++ {
		fmt.Println(arr[i])
	}
}

// Funcion principal main

func main() {
	arr := []int{33, 12, 7, 9}
	
	selectionSort(arr)
	printArray(arr)
}

