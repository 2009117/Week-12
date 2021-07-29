/******************************************

En el siguiente, programa se va a mostrar 
el precio del producto.txt

HotCakes= $90
Este es un ejemplo de lectura de archivos

*******************************************/


#include <iostream>
#include <stdlib.h>
#include <string.h> 
#include <fstream>
using namespace std;


void lectura();



int main(){
	lectura();

	system("pause");
	return 0; 

	
}



void lectura(){
	
	string pedido; 
	ifstream archivo; 
	
	archivo.open("Pedido.txt",ios::in);

	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
		}
	getline(archivo,pedido);
	
	
	while(!archivo.eof()){
		getline(archivo,pedido);
		cout<<pedido<<endl;	
		
	}
		if (pedido=="HotCakes"){
			cout<<"Total=90\n";
		}

				
			
		archivo.close(); //Cerrar archivo 
	
	
	
	
}
