#include <stdio.h>

void main(){

  int a=10,*pta;

  pta=&a;
  
  printf("Address of variabel a is: %p\n",&a);
  printf("Address of the pointer pta is: %p\n",&pta);
  printf("The pointer pta point to the following address: %p\n",pta);
  printf("The value that pointer pta point to is: %d\n",*pta);
  
}
