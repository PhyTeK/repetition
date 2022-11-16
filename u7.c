/*
  kunna summera en serie av heltal typ:sum= 1+2+3 ... 100
   1  +2  +3+ ..... 100
+  100+99+98+ ... +  1
-------------------------
   101 + 101 + 101 ... + 101 = 100*101 = 10100

   sum=10100/2 = 5050

 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
  unsigned long long i,sum=0;   // Now we can calculate very long series!!
  unsigned long max;

  if(argc<2)
    return 1;
  
  max=strtol(argv[1],'\0',10);
  
  for(i=1;i <= max;i++){
    sum += i;
  }
 
  printf("Sum = %llu\n",sum);
  return 0;
}
