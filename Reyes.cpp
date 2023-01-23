#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int cuentalet(char *pnom){
	int cont=0;
	while((*(pnom+cont))!='\0'){
		cont++;}
	return cont;
	}

int main(){
	char *reyes[3];
	char n1[9];
	while (1){
		cout<<"Introduce el nombre del primer rey mago: ";
		cin>>n1;
		if((cuentalet(n1))>(9)){
			cout<<"Te has pasao (la longitud '"<<cuentalet(n1)<<"' excede el limite de 9)"<<endl;
			continue;}
		else break;
		}
	cout<<"Has introducido '"<<n1<<"'"<<endl;
	*(reyes)=n1;
	while (1){
		cout<<"Introduce el nombre del segundo rey mago: ";
		cin>>n1;
		if (cuentalet(n1)>9){
			cout<<"Te has pasao (la longitud '"<<cuentalet(n1)<<"' excede el limite de 9)"<<endl;
			continue;}
		else break;
		}
	cout<<"Has introducido '"<<n1<<"'"<<endl;
	*(reyes+1)=n1;
	while (1){
		cout<<"Introduce el nombre del tercer rey mago: ";
		cin>>n1;
		if (cuentalet(n1)>9){
			cout<<"Te has pasao (la longitud '"<<cuentalet(n1)<<"' excede el limite de 9)"<<endl;
			continue;}
		else break;
		}
	cout<<"Has introducido '"<<n1<<"'"<<endl;
	*(reyes+2)=n1;
	
	return 0;
}
