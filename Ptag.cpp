#include <iostream> 
using namespace std;
//Tomar tres números, y comprobar si cumplen el teorema de pitágoras

int checkPit(int v1,int v2,int v3){
	int resp;
	if(((v1*v1+v2*v2)==v3*v3)||((v1*v1+v3*v3)==v2*v2)||((v2*v2+v3*v3)==v1*v1)) resp=1;
	return resp;
}
int main(){
	int n1,n2,n3;
	cout<<"Introduce el primer numero: ";
	cin>>n1;
	cout<<"Introduce el segundo numero: ";
	cin>>n2;
	cout<<"Introduce el tercer numero: ";
	cin>>n3;
	if (checkPit(n1,n2,n3)==1){
		cout<<"-Los numeros son una terna pitagorica";
	}
	else{
		cout<<"-Los numeros NO son una terna pitagorica";
	}
	return 0;
	
}

