/*
 * CALCULADORA
 *
 *
 * ULTIMA MODIFICACION: 25 de febrero del 2026
 *
 * ESPINOSA SALVADOR ROMAN
 *
 */

// Declaracion de las bibliotecas a usar
#include <stdio.h>

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
	int caso = 0, contador = 0, *cont = 0, blindaje = 0, blindaje_arreglo[MAX] = {0}, entrada[MAX] = {0};

	// Preguntar los numeros a usar
	printf("¿CUANTOS NUMEROS DESEA OPERAR?\n");
	printf("DESEO OPERAR: ");
	blindaje = scanf("%d", &contador);
	while(getchar() != '\n');
	if (blindaje != 1 || contador < 1 || contador > MAX) {
		printf("ERROR. VUELVA A INTENTAR\n");
		continue;
	}
	blindaje = 0; // Limpiar variable para reutilizar
	*cont = &contador;

	// Guardar los numeros en el arreglo
	printf("INGRESE LOS NUMEROS A OPERAR:\n");
	for (int i = 0; i < entrada[0]; i++) {
		printf("NUMERO %d: ", i+1);
		blindaje[i] = scanf("%d", &entrada[i]);
		while(getchar() != '\n');
		if (blindaje_arreglo[i] != 1 || contador < 1 || contador > MAX) {
			printf("ERROR. VUELVA A INTENTAR\n");
			continue;
		}
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
		blindaje = scanf("%d", &caso);
		while(getchar() != '\n');
		if (blindaje != 1 || contador < 1 || contador > MAX) {
			printf("ERROR. VUELVA A INTENTAR\n");
			continue;
		}

		switch(caso) {
			// SUMA
			case 1:
				suma(*cont, entrada);
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
void suma(int &cont, int entrada[]) {
	// Variable intermedia para la suma
	int suma = 0;
	int contador = cont;

	// Calculo de la suma
	for (int i = 0; i < contador; i++) {
		suma += entrada[i];
	}
	// Imprimir la suma
	printf("\nEL RESULTADO DE LA SUMA ES DE: %d\n", suma);
}

// Funcion de resta
// TODO: IMPLEMENTAR CORRECTAMENTE LA RESTA
void resta(int contador, int entrada[]) {
	// Variable intermedia para la resta
	int resta = 0;

	// Calculo de la resta
	for (int i = 0; i < entrada[0]; i++) {
		resta += resta - entrada[i];
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
