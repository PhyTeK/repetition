/*
  kunna implementera loopar (for, do och while)
*/

#include <stdio.h>

int main(int argc,char *argv[]){
  int i,j;
  
  // For loop

  for(i=1,j=10;i<10,j>0;i++,j--){
    printf("i=%d j=%d\n",i,j);
  }

  // Do loop

  i=0;
  do{i++;printf("%d\n",i);} while(i<10);

  // While loop

  i=0;
  while(i<5){
    printf("%d\n",i);
    i++;
  }
  
  return 0;
}
