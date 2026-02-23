/*
 * CALCULADORA
 *
 *
 * ULTIMA MODIFICACION: 21 de febrero del 2026
 *
 * ESPINOSA SALVADOR ROMAN
 *
 */

// Declaracion de las bibliotecas a usar
#include <stdio.h>
// #include <math.h>

// Constantes
#define MAX 30

// Declaracion de las funciones a usar
void suma();
void resta();
void multiplicacion();

/*
void modulo(int);
void division(int);
*/

// Funcion principal main
void main() {
	// Variables a utilizar
	int caso = 0, entrada[MAX] = {0}; // La posicion [0] del arreglo sera el numero de numeros a operar

	// Preguntar los numeros a usar
	printf("¿CUANTOS NUMEROS DESEA OPERAR?\n");
	printf("DESEO OPERAR: ");
	scanf("%d", &entrada[0]);
	// printf("entrada[0] = %d almacenado en %x\n", entrada[0], &entrada[0]); // DEBUG
	
	// Guardar los numeros en el arreglo
	printf("INGRESE LOS NUMEROS A OPERAR:\n");
	for (int i = 0; i < entrada[0]; i++) {
		printf("NUMERO %d: ", i+1);
		scanf("%d", &entrada[i+1]);
	}

	// Imprimir datos ingresados
	printf("\n=== DATOS QUE SE INGRESARON ===\n");
	printf("SE VAN A OPERAR %d NUMEROS\n", entrada[0]);
	printf("LOS NUMEROS A OPERAR SON:\n");
	for (int i = 0; i < entrada[0]; i++) {
		printf("\t%d", entrada[i+1]);
	}
	
	// Menu de opciones
	do {	
		// Opciones
		printf("\n=== CALCULADORA con enteros ===\n");
		printf("=== ¿QUE DESEA CALCULAR? ===\n");
		printf("1. SUMA\n");
		printf("2. RESTA\n");
		printf("3. MULTIPLICACION\n");
		printf("4. MODULO\n");
		printf("5. DIVISION ENTERA\n");
		printf("6. SALIR\n");
		printf("INGRESE SU OPCION: ");
		scanf("%d", &caso);
		// printf("caso = %d almacenado en %x\n", caso, &caso); // DEBUG

		switch(caso) {
			// SUMA
			case 1:
				suma(entrada);
				break;
			// RESTA
			case 2:
				resta(entrada);
				break;
			// MULTIPLICACION
			case 3:
				multiplicacion(entrada);
				break;
			// MODULO
			case 4:
				printf("modulo\n");
				// modulo(*n);
				break;
			// DIVISION ENTERA
			case 5:
				printf("div entera\n");
				// division(*n);
				break;
			// Salir del programa
			case 6:
				return;
				break;
			// Default
			default:
				printf("ERROR. VUELVA A INTENTAR\n");
				break;
		}

	} while (caso != 6);
}

// Funcion de suma
void suma(int entrada[]) {
	// Variable intermedia para la suma
	int suma = 0;
	
	// Calculo de la suma
	for (int i = 0; i < entrada[0]; i++) {
		suma += entrada[i+1];
	}
	// Imprimir la suma
	printf("\nEL RESULTADO DE LA SUMA ES DE: %d\n", suma);
}

// Funcion de resta
// TODO: IMPLEMENTAR CORRECTAMENTE LA RESTA
void resta(int entrada[]) {
	// Variable intermedia para la resta
	int resta = 0;

	// Calculo de la resta
	for (int i = 0; i < entrada[0]; i++) {
		resta = entrada[i+1] - entrada[i+2];
	}
	// Imprimir la resta
	printf("\nEL RESULTADO DE LA RESTA ES DE: %d\n", resta);
}


// Funcion de multiplicacion
void multiplicacion (int entrada[]) {
	// Variable intermedia para la multiplicacion
	int multiplicacion = 0;
	
	/* DEBUG: Imprimir entrada[]
	for (int i = 0; i < entrada[0]; i++) {
		printf("DEBUG: entrada[%d]: \t%d\n", i+1, entrada[i+1]);
	}
	*/

	// Calculo de la multiplicacion
	for (int i = 0; i < entrada[0]; i++) {
		multiplicacion += entrada[i+1] * entrada[i+2];
	}

	// Imprimir la multiplicacion
	printf("\nEL RESULTADO DE LA MULTIPLICACION ES: %d\n", multiplicacion);
}
/*
// Funcion de modulo
void modulo(int *n) {
	printf("DEBUG MODULO: %d\n", *n);
}

// Funcion de division
void division(int *n) {
	printf("DEBUG DIVISION: %d\n", *n);
}
*/
