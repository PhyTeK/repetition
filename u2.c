/*
kunna skriva ut in- och utdata (printf och scanf)
*/
#include<stdio.h>

int main(){
  char c;

  c='\0';

  // Indata
  while(c != 'q'){
    scanf("%c",&c);
  }

  // Utdata
  printf("%c",c);
  puts("hello");
  
  return 0;
}


