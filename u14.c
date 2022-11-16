/*
  Att kunna skillnaden mellan en index och element position i en lista/array.
*/

#include <stdio.h>


void main(int argc, char **argv){
  int arr[5]={2,4,1,6,5};
  // arr has five elements with indexes from 0 to 4
  
  int *pt; // A pointer to an integer

  
  pt=&arr[2];  // pt is initialized to the address (&) of the third element in arr.
  

  // The value that *(pt+2) points to is 5
  
  printf("%d\n",*(arr+2));
}
