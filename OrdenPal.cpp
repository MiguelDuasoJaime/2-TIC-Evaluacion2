#include<iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int cuentalet(char *pnom){
	int cont=0;
	while((*(pnom+cont))!='\0'){
		cont++;}
	return cont;
	}

int main(){
	char *plh[4];
	char sts;
	char *orden[4];
	int *n_plh[4];
	int stn;
	char n1[16];
	
	for (int ct=0;ct<4;ct++){
		cout<<"Introduce la palabra "<<(ct+1)<<": ";
		cin>>n1;
		int len=(cuentalet(n1));
		n_plh[ct]=(int *)malloc(sizeof(int));
		*(*(n_plh+ct))=len;
		plh[ct]=(char *)malloc((len+1)*sizeof(char));
		cout<<"Longitud: "<<*(*(n_plh+ct))<<endl;
		for(int ct2=0;ct2<=len;ct2++){
				printf("%c\n",*(n1+ct2));
				*(*(plh+ct)+ct2)=n1[ct2];
				//cout<<" -Traslado: ("<<*(*(plh+ct)+ct2)<<") "<<endl;	
				}
	}
	for (int cont=0;cont<4;cont++){
		for (int t=0;t<3;t++){
			if (*(*(n_plh+t))>*(*(n_plh+t+1))){
				stn=*(*(n_plh+t));
				//orden[]=(char *)malloc((len+1)*sizeof(char));
				//sts=*(*(plh+t)); //Se mueve el número de la longitud en la lista
				*(*(n_plh+t))=*(*(n_plh+t+1));
				//*(*(plh+t))=*(*(plh+t+1));
				*(*(n_plh+t+1))=stn;
				//*(*(plh+t+1))=sts;
			}
		}	
	}
	for(int c=0;c<=4;c++){
	//	printf("%s\n",*(*(plh+c)));
		cout<<*(*(n_plh+c))<<endl;
	}
	return 0;
}


