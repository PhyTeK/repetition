/*
Att kunna skillnaden mellan en index och element position i en lista/array.
 */
#include <stdio.h>

void main(int argc, char **argv){
  int arr[5]={2,4,1,6,5};
  int *pt;

  pt=&arr[0];

  printf("%p %p\n",&arr[0],arr);

  // The value that *(pt+2) points to?
  
  printf("%d\n",*(arr+2));
}
