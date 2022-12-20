#include <iostream> 
using namespace std;
int main(){
	int resp;
	int cic;
	cic=1;
	while(cic==1){
		cout<<"****************"<<endl;
		cout<<"*     MENU     *"<<endl;
		cout<<"****************"<<endl;
		cout<<"1- Volver a mostrar el menu"<<endl;
		cout<<"2- Aios"<<endl;
		cout<<"3- Mimir"<<endl;
		cout<<"ELIGE (po favo): ";
		cin>>resp;
		if (resp!=1 && resp!=2 && resp!=3){
		resp=4;
		}
		switch(resp){
			case 1:
			break;
		case 2:
			cout<<"Aios";
			cic=0;
			break;
		case 3:
			cout<<"'";
			cic=0;
			break;
		default:
			cout<<";?"<<endl;
			cic=0;
			break;
		}
	}
	return 0;
}
