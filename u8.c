/*
kunna omvandla gemener till versaler och vice versa.

INPUT: u8 a
OUTPUT: A
*/
#include <stdio.h>

int main(){
  char gem[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char ver[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

  int i;
  char c,cc;
  
  printf("Enter a character between A and Z\n");
  scanf("%c",&c);
  printf("%c\n",c+32);
  
    /*
    Done!
  for(i=0;i<26;i++){
    printf("%c -> %d\n",gem[i],gem[i]);
    printf("%c -> %d\n",ver[i],ver[i]);
  }
  */
  
  return 0;
}

