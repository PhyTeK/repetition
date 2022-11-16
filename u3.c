/*
  kunna implementera en If-satsen
*/

#include <stdio.h>

int main(){
  int a,b;

  puts("Enter two integer");
  scanf("%d %d",&a,&b);
  
  if(a > b){
    printf("The largest number is %d\n",a);
  }else if(b > a){
    printf("The largest number is %d\n",b);
  }else{
    printf("The two numbers are equal to %d\n",b);
  }
  
  return 0;
}
