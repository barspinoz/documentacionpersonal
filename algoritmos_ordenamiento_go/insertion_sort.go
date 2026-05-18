package main

import "fmt"

// Funcion de la logica del Insertion Sort

func insertionSort(arr []int) {

	n := len(arr)
	 
	for i := 1; i < n; i++ {
		key := arr[i]
		j := i - 1
		
		// Se mueven los elementos, de arr[0, ..., i-1],
		// que son mas grandes que la llave hasta una
		// posicion arriba de su posicion actual.
		//
		// NOTA IMPORTANTE: En go-lang no existen los
		// ciclos while, entonces, se usa el ciclo for.
		// Para la implementacion en otros lenguajes,
		// se debe usar una iteracion while (mientras)
		// con exactamente los mismos parametros.
		//
		for j >= 0 && arr[j] > key {
			arr[j + 1] = arr[j]
			j--
		}
		arr[j + 1] = key
	}
}

// Funcion para imprimir el arreglo de n tamanio

func printArray(arr []int) {
	n := len(arr)
	for i := 0; i < n; i++ {
		fmt.Println(arr[i])
	}
}

func main() {
	arr := []int{33, 12, 7, 9}
	
	insertionSort(arr)
	printArray(arr)

}

