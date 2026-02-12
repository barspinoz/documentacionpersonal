/* 
 * Repaso de datos primitivos en C:
 * En este código se verá el manejo de los distintos datos primitivos en el leguaje
 * C, veremos su declaración, su asignación estática y dinámica, la impresión del
 * dato almacenado en la variable al igual que su tamaño en memoria.
 *
 * Alexis Cote 11 de Febrero de 2026*/


//Improtación/declaración de las biblitoecas a utilizar/emplear
#include<stdio.h>

//Declaración de funciones a emplear
void enteros(int);
void flotantes(float);
void caracteres(char);
void doubles(double);
void shorts(short);
void longs(long);
void unsigneds(unsigned);

//Función principal: main
void main(){
	//Tipos de datos primitivos más usados
	int iv1 = 0, iv2 = 5;
	float fv1 = 0.0, fv2 = 3.0;
	char cv1 = ' ', cv2 = 'h';

	//Tipos de datos primitivos menos usados
	double pi = 3.1415926535897932384626433;
	short sv1 = 3;
	long lv1 = 9223372036854775807;
	unsigned uv1 = 	4294967295;
	
	//Impresión de los datos primitivos en C
	printf("\n\tIndica el valor que le quieres agregar a \"iv1\": ");
	scanf("%d", &iv1);
	printf("\n\tMostrando las variables enteras:");
	printf("\n\tMostrando iv1:\t");
	enteros(iv1);
	printf("\n\tMostrando iv2:\t");
	enteros(iv2);
	
	printf("\n\n\tMostrando las variables flotantes:");
	printf("\n\tMostrando fv1:\t");
	flotantes(fv1);
	printf("\n\tMostrando fv2:\t");
	flotantes(fv2);
	
	printf("\n\tMostrando las variables de caracteres:");
        printf("\n\tMostrando cv1:\t");
        caracteres(cv1);
        printf("\n\tMostrando cv2:\t");
        caracteres(cv2);

        printf("\n\n\tMostrando las variables double:");
        printf("\n\tMostrando pi:\t");
        doubles(pi);
	
	printf("\n\n\tMostrando las variables short:");
        printf("\n\tMostrando sv1:\t");
        shorts(sv1);

	printf("\n\n\tMostrando las variables long:");
        printf("\n\tMostrando lv1:\t");
        longs(lv1);

        printf("\n\n\tMostrando las variables unsigned:");
        printf("\n\tMostrando uv1:\t");
        unsigneds(uv1);

	printf("\n");
}

//Creación de las funciones a emplear
void enteros(int entero){
	printf("%d\tCantidad bytes: %ld", entero, sizeof(entero));
	//printf("%i", entero);
}

void flotantes(float flotante){
	printf("%f\tCantidad bytes: %ld", flotante, sizeof(flotante));
}

void caracteres(char caracter){
        printf("%c\tCantidad bytes: %ld", caracter, sizeof(caracter));
}

void doubles(double doble){
        printf("%lf\tCantidad bytes: %ld", doble, sizeof(doble));
}

void shorts(short corto){
        printf("%hd\tCantidad bytes: %ld", corto, sizeof(corto));
}

void longs(long largo){
        printf("%ld\tCantidad bytes: %ld", largo, sizeof(largo));
}

void unsigneds(unsigned n_signo){
	printf("%u\tCantidad bytes: %ld", n_signo, sizeof(n_signo));
}
