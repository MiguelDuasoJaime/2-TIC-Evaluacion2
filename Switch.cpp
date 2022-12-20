#include <iostream> 
using namespace std;
int main(){
	int resp;
	cout<<"****************"<<endl;
	cout<<"*     MENU     *"<<endl;
	cout<<"****************"<<endl;
	cout<<"1- Volver a mostrar el menu"<<endl;
	cout<<"2- Aios"<<endl;
	cout<<"3- Mimir"<<endl;
	cout<<"ELIGE (po favo): ";
	cin>>resp;
	switch(resp){
		case 1:
			cout<<"****************"<<endl;
			cout<<"*     MENU     *"<<endl;
			cout<<"****************"<<endl;
			cout<<"1- Volver a mostrar el menu"<<endl;
			cout<<"2- Aios"<<endl;
			cout<<"3- Mimir"<<endl;
			cout<<"ELIGE (po favo): ";
			cin>>resp;
			cout<<"Pa que elgiges si se ha acabao?";
			break;
		case 2:
			cout<<"Aios";
			break;
		case 3:
			cout<<"'";
			break;
		default:
			cout<<"a.";
	}
	return 0;
}
