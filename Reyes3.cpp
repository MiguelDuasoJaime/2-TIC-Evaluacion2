#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int cuenta_letras(char *p_nombre){
    int cont=0;
    int fil;
    while(*(p_nombre+cont)!='\0'){
        cont++;    
    }
    return cont;
   
}

int main(){
    char *reyes[3];
    char nombre[10];
    int longitud;
    int fil;
    int nveces;
    char *aux;
    int cont,cont1;
    for(cont=0;cont<3;cont++){
        //Pedimos el nombre del rey mago
        cout<<"\nDime el nombre del rey mago "<<cont<<": ";
        cin>>nombre;
        printf("\nHas introducido %s",nombre);
        //Verificamos que lo hemos leido bien mostrandolo
        //por pantalla
        cout<<"\nHas introducido el nombre de "<<nombre;
        //Contamos cuantas letras tiene el nombre
        longitud=cuenta_letras(nombre);    
        //Lo deletreamos en vertical
        //for(cont=0;cont<longitud;cont++){
        //    printf("\n%c",*(nombre+cont));
        //}
        //reservamos memoria para el nombre
        reyes[cont]=(char *) malloc((longitud+2)*sizeof(char));
        printf("\nLongitud= %d",longitud);
        //Trasladamos la palabra letra a letra
        for(cont1=0;cont1<=longitud;cont1++){
            *(*(reyes+cont)+cont1)=nombre[cont1];
            printf("\nTrasladada la letra %c",*(*(reyes+cont)+cont1));
        }
    }
    //Comprobación
    cout<<endl;
    cout<<"***********************************"<<endl;
    cout<<"*        The magic Kings           *"<<endl;
    cout<<"***********************************"<<endl;
    for(cont=0;cont<3;cont++){
        printf("%s\n",reyes[cont]);    
    }
    //Vamos a ordenar la lista por orden alfabetico
    for(nveces=1;nveces<3;nveces++){
        for(fil=0;fil<2;fil++){
            if(*(*(reyes+fil))>*(*(reyes+fil+1))){
                aux=reyes[fil];
                reyes[fil]=reyes[fil+1];
                reyes[fil+1]=aux;
           
            }        
        }
    }
    // Comprobación como lista ordenada
    cout<<endl;
    cout<<"***********************************"<<endl;
    cout<<"*     The magic Kings sorted      *"<<endl;
    cout<<"***********************************"<<endl;
    for(cont=0;cont<3;cont++){
        printf("%s\n",reyes[cont]);    
    }

    return 0;
}
