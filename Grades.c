#include <stdio.h>
#include <stdlib.h>


/* Condiciones 
F= 0-60
D=61-70
C=71-80
B=81-90
A=91-100
*/
/*******************************
1-3 => -
4-7 => <blanck>
8-0 => +

********************************/




int main(void) {
	
	float X;
	char on[1000];
	
	FILE*fichero;
	fichero=fopen("Grades.txt","wt");
  
  printf("Insert your grade\n");
  fgets(on, sizeof(on),stdin);
  sscanf(on, "%f", &X);
 
 //If for the A=91-100
  if (91<X && 93>X) 
    printf("Grade: A-\n");
    else if (94< X && 97>X)
      printf ("Grade: A\n");
    else if (98< X && 100>=X)
      printf ("Grande: A+\n");

  // If for the B=81-90
    if (81< X && 83>X)
      printf("Grade: B-\n");
        else if (84< X && 87>X)
      printf ("Grande: B\n");
        else if (88< X && 90>=X)
      printf ("Grade: B+\n");

  // If for the C=71=80
    if (71< X && 73>X)
      printf("Grade: C-\n");
      else if (74< X && 77>X)
        printf ("Grade: C\n");
      else if (78< X && 80>=X)
        printf ("Grade: C+\n");


  // If fot the D=61-70
    if (61< X && 63>X)
      printf("Grade: D-\n");
      else if (64< X && 67>X)
        printf ("Grade: D\n");
      else if (68< X && 70>=X)
        printf ("Grade: D+\n");

  // If fot the F=0-60
    if (0< X && 60>=X)
      printf("Grade: F\n");    


fprintf(fichero,"Tu calificación es: %.2f",X);
fclose(fichero);

  return 0;
}
