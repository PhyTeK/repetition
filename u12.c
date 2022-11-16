/*
  Att kunna aritmetik med pekare.
 */

#include <stdio.h>

void main(int argc, char **argv){
  int arr[5]={2,4,1,6,5};
  int *pt;

  pt=&arr[2];

  // arr has same address than its first element arr[0]
  printf("%p %p\n",&arr[0],arr);

  // The value that *(pt+2) points to?
  
  printf("%d\n",*(pt+2));
}
