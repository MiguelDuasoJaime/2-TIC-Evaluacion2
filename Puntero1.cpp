#include <iostream> 
#include <stdio.h> //Añade algunas funciones 
using namespace std;

int main(){
	float x=3.5;
	int y=5;
	int *py; //Puntero para tomar la dirección de y
	py=&y;
	char letra='B';
	char *pl=&letra;
	char pal[]="Xenofobia";
	
	//printf("Numero1 = %d, Numero2 = %f",y,x); //%d es para sacar un entero, %f para un float...
	//printf("y=%d \n",y);
	printf("py=%x \n",py);//%x es para puntero
	printf("Letra=%c \n",letra);
	printf("pl=%x \n",pl);
	printf("%s\n",pal);
	printf("%c\n",pal[0]);
	return 0;
}
