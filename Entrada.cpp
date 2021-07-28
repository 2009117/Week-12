#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir ();



int  main(){
	escribir ();
	
	system("pause")	;
	return 0;	
	
	
}

void escribir (){    

	ofstream archivo;
	string frase, Horario;
	
	archivo.open("prueba.txt",ios::out); //Abriendo/creando archivo
		
		if (archivo.fail())	{
			cout <<"No se pudo abrir el archivo";
			exit(1);
		}
	
		
		cout<<"\n Ingresa tu nombre: ";
		getline(cin,frase);
		
		cout<<"\n Ingresa tu hora de entrada: ";
		getline (cin,Horario);
				
		archivo<<"Nombre:\n "<<frase;
		archivo<<"\n Horario de entrada: \n"<<Horario;
		  		
  		
		
		
		archivo.close(); //Cerrar archivo 
}
