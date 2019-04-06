/*
 ============================================================================
 Name        : ej1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* str_concat(char*, const char*);

int main(){

	char* nombre = "Franco";
	char* hola = malloc(15);
	strcpy(hola,"Hola ");
	char* saludo;

	saludo = str_concat(hola, nombre);

	printf("%s", saludo);

	free(hola);
	return 0;
}

char* str_concat(char* str1, const char* str2){
	char* str3 = strcat(str1,str2);
	return str3;

}
