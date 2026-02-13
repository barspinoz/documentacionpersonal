/*
 * CALIFICACIONES DE UN GRUPO
 *
 * El siguiente programa mostrará de forma práctica el uso
 * de arreglos para almacenar y manipular información.
 *
 * En un grupo de 20 alumnos se necesitan almacenar las
 * calificaciones. Estas calificaciones serán de tipo
 * flotante. Con dichas calificaciones se obtendrá el
 * promedio de calificaciones del grupo.
 *
 * Última modificación:
 * 13 de febrero del 2026
 *
 * Castelan Sierra Gael
 * Espinosa Salvador Roman
 * Maldonado Martinez Erick Fernando
 * Vidaure Alvarez Kevin Emmanuel
 */

// Declaración de las bibliotecas a emplear
#include <stdio.h>

// Declaración de funciones a emplear
void calificaciones();

// Función principal: main
void main() {
	// Variables a utilizar
	int caso = 0;

	// Menú de selección
	do {
		// Opciones
		printf("=== BIENVENDIO ===\n");
		printf("1. CALIFICAR ALUMNOS Y CALCULAR PROMEDIO\n");
		printf("2. SALIR\n");
		printf("INGRESE SU OPCION: ");
		scanf("%d", &caso);

		switch(caso) {
			// CALIFICACIONES Y PROMEDIOS
			case 1: 
				calificaciones();
				break;
			// SALIR
			case 2:
				printf("HASTA LUEGO\n");
				break;

			default:
				printf("ERROR. VUELVA A INTENTAR\n");
				break;
		}

	} while (caso != 2);
}

// Creación de las funciones a emplear

// FUNCION DE CALIFICACIONES
void calificaciones() {

	// Variables a utilizar
	float calificaciones[20] = {0}; // Arreglo para almacenar calificaciones
	double suma = 0.0; // Variable intermedia para la suma de calificaciones
	float promedio = 0.0;

	// Guardar calificaciones en el arreglo
	printf("=== CAPTURA DE CALIFICACIONES ===\n");
	printf("CANTIDAD DE ALUMNOS: 20\n");
	printf("Ingrese las calificaciones de cada alumno:\n");
	
	for(int i = 0; i < 20; i++) {
		printf("\tAlumno No. %d: ", i);
		scanf("%f", &calificaciones[i]);
		suma += calificaciones[i];
	}

	// Mostrar calificaciones
	printf("\n=== CALIFICACIONES QUE SE INGRESARON ===\n");

	for(int i = 0; i < 20; i++) {
		printf("\tAlumno No. %d: \t%.2f", i, calificaciones[i]);
		printf("\n");
	}

	// Promedio
	promedio = suma / 20; // Cálculo del promedio
	printf("EL PROMEDIO DE CALIFICACIONES ES DE: %.2f\n", promedio);

}
