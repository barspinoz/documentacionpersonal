#include <stdio.h>

int main () {
	// ARREGLO TRIDIMENCIONAL
	int arreglo1[5][2][2] = {0};
	// ARREGLO MATRICIAL
	float arreglo2[3][3];
	// ARREGLO LINEAL
	char arreglo3[9];

	printf("ROCK AND ROLL!\n");
	// TAMANIO CON VARIABLES
	int tam = 0;
	// LINEAL
	int arreglo1_usr[tam];
	// MATRICIAL
	int filas = 0;
	int columnas = 0;
	int arreglo2_usr[filas][columnas];

	printf("ROCK AND ROLL!\n");
	// INICIALIZAR ARREGLOS

	// ARREGLOS LINEALES
	int arreglo1_ini[5] = {0,1,2,3,4};
	// ARREGLOS MATRICIALES
	int arreglo2_ini[2][3] = {{1,2,3},{9,8,7}};

	printf("ROCK AND ROLL!\n");
	// LLENAR ARREGLOS CON EL USUARIO
	// CICLOS FOR

	// ARREGLOS LINEALES
	int arr[5] = {0};
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	// ARREGLOS MATRICIALES
	int arr2[2][3];
	for (int i = 0; i < 2; i++) {
		for (int i = 0; i < 3; ++i) {
			scanf("%d", &arr2[i][j]);
		}
	}
	return 0;
}
