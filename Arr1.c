/*
Ing. Alexis Cote
*/

#include<stdio.h>

void main(){
	int col = 0, ren = 0;
	int suma = 0; //,cantidad = 0;//, promedio = 0;
	float promedio = 0.0, cantidad = 0.0;//, suma = 0.0;

	printf("\nIngrese el número de columnas y renglones a utilizar separados por un \" \" entre cada número: ");
	scanf("%d%d", &col, &ren);
	//scanf("%d", &col);
	//scanf("%d", &ren);

	printf("%d y %d", col, ren);
	int Arreglo[ren][col];

	printf("\nPor favor ingrese los valores del arreglo comenzando en el primer renglón\n");
	printf("y llenando de derecha a izquierda.\n");
	for(int i = 0; i < ren; i++){
		for(int j = 0; j < col; j++){
			printf("\tArreglo[%d][%d]: ", i, j);
			scanf("%d", &Arreglo[i][j]);

			suma+=Arreglo[i][j];
		}
	}
	//printf("suma: %d", suma);

	printf("\nArreglo ingresado:\n\n");
	for(int i = 0; i < ren; i++){
		for(int j = 0; j < col; j++){
			printf("%d\t", Arreglo[i][j]);
		}
		printf("\n");
	}

	cantidad = ren * col;
	promedio = suma / cantidad;
	
	//printf("Promedio del arreglo: %d\n", promedio);
	printf("Promedio del arreglo: %f\n", promedio);
}