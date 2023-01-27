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
	char *reyes[3];
	char n1[10];
	for (int cnt=0;cnt<3;cnt++){
		while (1){
			cout<<"Introduce el nombre del rey mago "<<cnt+1<<": ";
			cin>>n1;
			int len=cuentalet(n1);
			cout<<"La longitud es: "<<len<<endl;
			if((len)>(9)){
				cout<<"Te has pasao (la longitud '"<<len<<"' excede el limite de 9)"<<endl;
				continue;
				}
			else{
			reyes[cnt]=(char *)malloc((len+1)*sizeof(char));
			for(int ct=0;ct<=len;ct++){
				printf("%c",*(n1+ct));
				*(*(reyes+cnt)+ct)=n1[ct];
				cout<<" -Traslado: ("<<*(*(reyes+cnt)+ct)<<") "<<endl;
				}
			break;}
		}
		cout<<"Cadena trasladada: "<<reyes[cnt]<<endl<<endl;
	}
	return 0;
}
