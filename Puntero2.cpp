#include<iostream>
#include <stdio.h> //Añade algunas funciones
#include <string.h>
using namespace std;

int main(){
	char pal[]="Xenofobia";
	int cont;
	char *plet;
	for (cont=0;cont<=(strlen(pal)-1);cont++){
		printf("Letra n%d: %c\n",cont,pal[cont]);
		plet=&pal[cont];
		printf("Su posicion es %x\n",pal[cont]);
	}
		return 0;
}
