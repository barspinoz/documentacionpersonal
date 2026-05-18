package main

import "fmt"

// Funcion para convertir el arreglo a heap (o estructura de arbol)

func heapify(arr []int, n int, i int) {

	// Se toma al elemento mas grande como la raiz
	largest := i

	// indice izquierdo == 2*i + 1
	l := 2 * i + 1

	// indice derecho == 2*i + 2
	r := 2 * i + 2

	// Si el hijo izquierdo es mas grande que la raiz:
	if l < n && arr[l] > arr[largest] {
		largest = l
	}

	// Si el hijo derecho es mas grande que el elemento
	// mas grande:
	if r < n && arr[r] > arr[largest] {
		largest = r
	}

	// Si el mas grande NO ES la raiz
	if largest != i {
		arr[i], arr[largest] = arr[largest], arr[i]

		// Recursivamente se vuelve a sacar el
		// maximo Heap
		heapify(arr, n, largest)
	}
}

// Funcion para ejecutar el Heap Sort

func heapSort(arr []int) {
	n := len(arr)

	// Sacar el maximo Heap (reordenar el arreglo)
	for i := n / 2 - 1; i >= 0; i-- {
		heapify(arr, n, i)
	}

	// Extraer elemento a elemento los datos del Heap
	for i := n - 1; i > 0; i-- {
		// TODO: Verificar los casos base

		// Mover la raiz actual hasta el final
		arr[0], arr[i] = arr[i], arr[0]

		// Sacar de nuevo el maximo Heap
		heapify(arr, i, 0)
	}
}

// Funcion principal main

func main() {
	arr := []int{33, 12, 7, 9}

	heapSort(arr)

	fmt.Println(arr)
}

