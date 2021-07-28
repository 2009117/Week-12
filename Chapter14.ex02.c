#include <stdio.h>
#include <stdlib.h>

int main (void){
char input[]="Archivo1.txt";
char output[]= "Archivo2.txt";

int Ch, spaces=2;
int i;


FILE*Input;
FILE*Output;




Input= fopen(input,"r");

  if (Input ==NULL){
    fprintf(stderr, "It cant be find it %s\n",input);
    exit(8);
    }


Output = fopen(output,"w");
    if (Output==NULL){
      fprintf(stderr, "It cant be find it %s\n", output);

    }

    while (1){
      Ch=fgetc(Input);

        if (Ch == ' ') {
          Ch = ' ';

          for (i=0; i<= spaces; i++){
            fputc(Ch, Output);
          }
        }
      if (Ch==EOF)
      break;

      fputc(Ch, Output);

    }

    fclose(Input);
    fclose(Output);

return 0; 
}


