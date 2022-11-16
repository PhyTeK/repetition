/*
  kunna deklarera och definiera en variabel och en funktion

*/

#include <stdio.h>

int fun(int,float,char *);

int main(){
  // Declarations
  int i=1;
  float f=1.23;
  double d;

  char str[100]="some text";

  fun(i,f,str);

  return 0;
}

int fun(int a,float f,char *str){

  printf("i=%d, f=%f, str='%s'\n",a,f,str);

  return 0;
}
