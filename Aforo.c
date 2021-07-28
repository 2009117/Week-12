/***************************************

Este programa va leer los valores de un
archivo .txt donde se encuentre el numero 
de personas que han entrado en una plaza

**************************************/

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
	
	ifstream archivo;
	string numero; 
	
	
	archivo.open("Asistencia.txt",ios::in); //Abrir el archivo con el numero de asistencia 
	
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
		}
		
	while(!archivo.eof()){ //Mientras no sea el final del archivo 
	getline(archivo,numero);	
	cout<<numero<<endl;
}
	
	
		if (numero =="Lleno"){		
			cout<<"Al limite del aforo\n";
			
	}
		
		else {
		cout<<"Hay aforo\n";	
			
		}
	}
				
				
	
