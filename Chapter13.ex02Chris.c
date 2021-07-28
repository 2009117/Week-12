#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *WithE(char *S); 

int main()
{
	char string[] = "Introduce an string: \n"; 

	printf("The following character is not a space: '%c'\n", *WithE(string)); 

	return 0;
}

char *WithE(char *S) 
{
	
	while (*S != '\0') {
		
		if (! isspace(*S))
	
			return S; 
		++S;
	}

	return S;
}
