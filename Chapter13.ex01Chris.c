#include <stdio.h>
#define A 5 //Defined the number of the array 

int main (){

int V[A]={3,7,5,2,8}; //Put the values into a array 
int *on; //To acces to the memory of the data 

for (on=&V[0]; on <= &V[A];++on){
  *on=0;

}
for (int i=1;i <=A; ++i) //Count all numbers
    printf("data[%d]=%d\n",i,V[i]); //Show the numbers

    return 0;


}
