from PIL import Image, ImageDraw

def add_grid_to_image(image_path, output_path, grid_size=50, line_color=(0, 0, 0), line_width=1):
    """
    Añade una cuadrícula a una imagen.
    
    Args:
        image_path: Ruta de la imagen original
        output_path: Ruta donde guardar la imagen con cuadrícula
        grid_size: Tamaño de cada celda en píxeles
        line_color: Color RGB de las líneas, ej: (255, 255, 255) para blanco
        line_width: Grosor de las líneas en píxeles
    """
    # Abrir la imagen
    img = Image.open(image_path)
    draw = ImageDraw.Draw(img)
    
    width, height = img.size
    
    # Dibujar líneas verticales
    for x in range(grid_size, width, grid_size):
        draw.line([(x, 0), (x, height)], fill=line_color, width=line_width)
    
    # Dibujar líneas horizontales
    for y in range(grid_size, height, grid_size):
        draw.line([(0, y), (width, y)], fill=line_color, width=line_width)
    
    # Guardar la imagen
    img.save(output_path)
    print(f"✅ Imagen guardada en: {output_path}")

# Ejemplo de uso
add_grid_to_image(
    image_path="foto.jpg",
    output_path="foto_con_cuadricula.jpg",
    grid_size=100,
    line_color=(255, 0, 0),  # Rojo
    line_width=2
)
