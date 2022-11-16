/*
  veta skillnaden mellan i++ och ++i
*/

#include <stdio.h>

int main(int argc,char *argv[]){

  int i;

  i=0;
  
  for(i=0;i<10;i++){
    printf("i++=%d\n",i++);
  }
  for(;i<20;i++){
    printf("++i=%d\n",i);
  }
  printf("i=%d\n",i);

  return 0;
}
