#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int suma_fila(int pos, int **fila){
    int res=0;
    for (int x=0;x<3;x++){
        res = res + *(*(fila+pos)+x);
        }
    return res;
}   


int main(){
	int *filas[3];
	int *repes[9];
	int c=(-1);
	int chck;
	long seed=(time(0));
	int random;
	srand(seed); //Produce una semilla
	
	for (int ct=0;ct<3;ct++){
		filas[ct]=(int *)malloc(3*sizeof(int));
		cout<<"Fila "<<(ct+1)<<": ";
		for (int ct2=0;ct2<3;ct2++){
			while (1){
				chck=0;
				random=(rand() % 10); //El '%10' establece un rango (0 a 9)
				for (int cnt=0;cnt<=c;cnt++){
					if (random == *(*(repes+cnt))){chck=1;}
				}
				if (chck==0){
					c=c+1;
					repes[c]=(int *)malloc(sizeof(int));
					*(*(repes+c))=random;
					break;
				}
				
			}
			*(*(filas+ct)+ct2)=(random);
			cout<<*(*(filas+ct)+ct2)<<" ";
		}
		cout<<"\n";
	}
	int rand2=(rand()%3);
	cout<<"Suma de los elementos de la fila "<<rand2+1<<" --> "<<suma_fila(rand2,filas); 
	return 0;
}
