package main

import "fmt"

// Funcion para dividir el arreglo

func partition(arr []int, low int, high int) int {
	// Elegimos un pivote
	pivot := arr[high]

	// Hacemos un indice de los elementos
	// mas pequenios e indicamos la posi-
	// cion del pivote
	i := low - 1

	// Movemos los elementos mas pequenios
	// al lado izquierdo. Los elementos des-
	// de low hasta i seran mas pequenios
	// en cada iteracion
	for j := low; j < high; j++ {
		if arr[j] < pivot {
			i++
			swap(arr, i, j)
		}
	}

	// Se mueve el pivote despues de los
	// elementos mas pequenios y se regresa
	// la posicion del mismo
	swap(arr, i + 1, high)
	return i + 1
}

// Funcion para intercambiar posiciones en el arreglo

func swap(arr []int, i int, j int) {
	arr[i], arr[j] = arr[j], arr[i]
}

// Implementacion del algoritmo de QuickSort

func quickSort(arr []int, low int, high int) {
	if low < high {
		
		// pi va a ser el indice numerico del
		// pivote que regresara la funcion partition 
		pi := partition(arr, low, high)

		// Aqui se haran las llamadas de recursividad
		// para los elementos mas pequenios, los mas
		// grandes o los elementos repetidos
		quickSort(arr, low, pi - 1)
		quickSort(arr, pi + 1, high)
	}
}

// Funcion principal main

func main() {
	arr := []int{33, 12, 7, 9}
	n := len(arr)

	quickSort(arr, 0, n - 1)

	fmt.Println(arr)
}


