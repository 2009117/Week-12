#include <stdio.h>
#define MAX_FILE_LINE 100

char on[1000];


int main(){
  FILE*input;

  int C=0;
  char Line[MAX_FILE_LINE], c;

  printf("Introduce the number of lines\n");
  fgets(on,sizeof(on), stdin);
  sscanf(on,"%s",Line);


  input=fopen(Line, "r");


  if (input==NULL)
  {
    printf("It can be open this file");
    return 0; 
  }
  for (c=getc(input); c !=EOF; c=getc(input))
      if (c== '\n')
        C = C +1;

    fclose(input);
    printf("The file %s has %d these line \n",Line, C);
    
  return 0;
}
