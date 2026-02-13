/*
 * PRACTICA 1 de EDA I: ARREGLOS
 * El objetivo de este programa es comprender el uso
 * de los arreglos para almacenar y manipular información
 * contenida dentro de los arreglos.
 *
 * 12 de febrero del 2026
 *
 * Castelan Sierra Gael
 * Espinosa Salvador Roman
 * Maldonado Martinez Erick Fernando
 * Vidaure Alvarez Kevin Emmanuel
 */

// Declaración de las bibliotecas a emplear
#include <stdio.h>

// Declaración de funciones a emplear
void arreglos_enteros();

// Función principal: main
int main() {
	printf("=== BIENVENIDO ===\n");

	// EJEMPLO DE ARREGLOS ENTEROS
	arreglos_enteros();

	// EJEMPLO ARREGLOS FLOTANTES
	arreglos_flotantes();
	
	// EJEMPLO ARREGLOS CON CARACTERES

	return 0;
}

// Creación de las funciones a emplear

// ARREGLOS ENTEROS
void arreglos_enteros() {

	// Variables
	int enteros_uno[7] = {0}; // Arreglo Lineal
	int enteros_dos[2][5] = {0}; // Arreglo Matricial
	int enteros_tres[3][3][3] = {0}; // Arreglo tridimencional

	// ARREGLO LINEAL
	//
	// Llenar arreglo
	printf("=== EJEMPLO DE ARREGLO LINEAL ===\n");
	printf("INGRESE ENTEROS PARA LLENAR EL ARREGLO:\n");
	
	for(int i = 0; i < 7; i++) {
		printf("\tArreglo[%d]: ", i);
		scanf("%d", &enteros_uno[i]);
	}
	
	// Mostrar arreglo
	printf("DATOS QUE SE INGRESARON:\n");

	for(int i = 0; i < 7; i++) {
		printf("%d\t", enteros_uno[i]);
	}

	// ARREGLO MATRICIAL
	//
	// Llenar arreglo
	printf("\n=== EJEMPLO DE ARREGLO MATRICIAL ===\n");
	printf("INGRESE ENTEROS PARA LLENAR EL ARREGLO\n");
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 5; j++) {
			printf("\tArreglo[%d][%d]: ", i, j);
			scanf("%d", &enteros_dos[i][j]);
		}
	}

	// Mostrar el arreglo
	printf("DATOS QUE SE INGRESARON:\n");

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 5; j++) {
			printf("%d\t", enteros_dos[i][j]);
		}
		printf("\n");
	}

	// ARREGLO TRIDIMENCIONAL
	//
	// Llenar arreglo
	printf("=== EJEMPLO DE ARREGLO TRIDIMENCIONAL ===\n");
	printf("INGRESE ENTEROS PARA LLENAR EL ARREGLO\n");

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 3; k++) {
				printf("\tArreglo[%d][%d][%d]: ", i, j, k);
				scanf("%d", &enteros_tres[i][j][k]);
			}
		}
	}

	// Mostrar el arreglo
	printf("\nDATOS QUE SE INGRESARON:\n");

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 3; k++) {
				printf("%d\t", enteros_tres[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

// ARREGLOS FLOTANTES
void arreglos_flotantes() {
	// Variables
	float flotantes_uno[7] = {0}; // Arreglo Lineal
	float flotantes_dos[2][5] = {0} // Arreglo Matricial

	// ARREGLO LINEAL
	//
	// Llenar arreglo
	printf("=== EJEMPLO DE ARREGLO LINEAL ===\n");
	printf("INGRESE REALES PARA LLENAR EL ARREGLO:\n");

	for(int i = 0; i < 7; i++) {
		printf("\tArreglo[%d]: ", i);
		scanf("%d", &flotantes_uno[i]);
	}

	// Mostrar el arreglo
	printf("DATOS QUE SE INGRESARON:\n");
	
	for(int i = 0; i < 7; i++) {
		printf("%d\t", flotantes[i]);
	}

	// ARREGLO MATRICIAL
	//
	// Llenar arreglo
	printf("=== EJEMPLO DE ARREGLO MATRICIAL ===\n");
	printf("INGRESE REALES PARA LLENAR EL ARREGLO\n");

	for(int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("\tArreglo[%d][%d]: ", i, j);
			scanf("%d", &flotantes_dos[i][j]);
		}
	}

	// Mostrar el arreglo
	printf("DATOS QUE SE INGRESARON:\n");

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 5; j++) {
			printf("%d\t", flotantes_dos[i][j]);
		}
		printf("\n");
	}
}
