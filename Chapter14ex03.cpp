#include <stdlib.h>
#include <string.h> 
#include <stdio.h>

int main(){
	
	FILE *Three;
	FILE *All;
	FILE *Exercise3;
	int numero;
	size_t  SIU = 0; 
	char *linea=NULL;
	
  Exercise3= fopen("Exercise3.txt","r");
	Three=fopen("Three.txt","w");
	All=fopen("All.txt","w");	
	
	
	
	
	//Para detectar si hay algun fallo
	
	if(Exercise3==NULL){
	
		exit(1);
		
	}
	
	
	
	while(getline(&linea,&SIU,Exercise3)!=-1){
		sscanf(linea, "%d", &numero); 
		
		if ((numero % 3) == 0)
			fprintf(Three,"%d\n",numero);
	
			else 
			fprintf(All,"%d\n",numero);
			
			
				
			
  }
			free(linea);
			fclose(Exercise3);
			fclose(Three);
			fclose(All);
			

	return 0; 	
			}
			
