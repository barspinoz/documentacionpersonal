package main

import "fmt"

// Funcion merge

func merge(arr []int, left int, mid int, right int) {
	n1 := mid - left + 1
	n2 := right - mid

	// Crear arreglos temporales
	L := make([]int, n1)
	R := make([]int, n2)

	// Copiar informacion a los arreglos temporales
	for i := 0; i < n1; i++ {
		L[i] = arr[left + i]
	}

	for j := 0; j < n2; j++ {
		R[j] = arr[mid + 1 + j]
	}

	i := 0
	j := 0
	k := left

	// Se juntan los arreglos temporales al arreglo original
	for i < n1 && j < n2 {
		if L[i] <= R[j] {
			arr[k] = L[i]
			i++
		} else {
			arr[k] = R[j]
			j++
		}
		k++
	}

	// Se copia los elementos restantes de R[]
	// (si es que quedan elementos)
	for j < n2 {
		arr[k] = R[j]
		j++
		k++
	}

	// Se copian los elementos restantes de L[]
	// (si es que quedan elementos)
	for i < n1 {
		arr[k] = L[i]
		i++
		k++
	}
}

// Funcion para Merge Sort

func mergeSort(arr []int, left int, right int) {
	if left < right {
		mid := (left + right) / 2
		mergeSort(arr, left, mid)
		mergeSort(arr, mid + 1, right)
		merge(arr, left, mid, right)
	}
}

// Funcion principal main

func main() {
	arr := []int{33, 12, 7, 9}

	mergeSort(arr, 0, len(arr) - 1)
	fmt.Println(arr)
}

