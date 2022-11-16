/*

  File access on Raspberry Pi need that EOF is redined to 0xff=255

 */

#include <stdio.h>

int main(){
  FILE *fpt;
  //char c;
  int c;
  
  fpt=fopen("u15.c","r");
  if(fpt==NULL)
    return 1;

  /*

    Because of how negative numbers are represented on most systems,
    the char value of -1 is (in hexadecimal) 0xff. For a signed char, when
    -1 is converted to an int, it keeps the value -1 (which will be
    represented as 0xffffffff for a 32-bit int type).

  */

  
  while((c=fgetc(fpt)) != EOF ){
    printf("%c",c);
  }

  puts("");
  
  fclose(fpt);
  return 0;
  
}
