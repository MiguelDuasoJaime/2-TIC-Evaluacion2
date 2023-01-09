#include <iostream> 
using namespace std;

int main(){
	int cont, num;
	cout<<"Introduce el numero: ";
	cin>>num;
	cout<<"Tabla del "<<num<<endl;
	for(cont=1;cont<=12;cont++){
		cout<<num<<" * "<<cont<<" = "<<num*cont<<endl;
	}
	cout<<"-Pulse una tecla para salir";
	cin>>num;
	return 0;
}
