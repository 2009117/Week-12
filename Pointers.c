/**************************************************************************

CodeWorld19.(2021). Pointers in C- Hacer Rank. Codeworld19. 
Recuperado de: https://codeworld19.blogspot.com/2020/03/pointers-in-c.html



**************************************************************************/


#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int A,Z; 
    A=*a+*b;
    Z=*a-*b;
    
    *a = A;
    *b=abs(Z);
        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
