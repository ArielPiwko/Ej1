#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* str_concat(char*, const char*);

int main(){

	char* nombre = "Nombre";
	char* hola = malloc(15); //con 15 bytes alcanza y sobra
	strcpy(hola,"Hola ");
	char* saludo;

	saludo = str_concat(hola, nombre);

	printf("%s", saludo);

	free(hola);  //siempre hay que liberar la memoria que pedi
	return 0;
}

char* str_concat(char* str1, const char* str2){
	char* str3 = strcat(str1,str2);
	return str3;

}
