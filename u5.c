/*
  (5) Att kunna CPP direktiver: #include, #ifdef, #ifndef, #endif,
  och #define.

*/

#ifndef __MAX__
#define __MAX__  1
#define MAX(x,y) ((x)>(y)?(x):(y))
#endif
#ifndef __MIN__
#define __MIN__  1
#define MIN(x,y) ((x)<(y)?(x):(y)) 
#endif
#ifndef MAXL
#define MAXL 200
#endif

#ifndef __STDIO__
#include <stdio.h>
#define __STDIO__  1
#endif
#define MAXC 100

int main(){
  int a=2,b=3;
  char message[MAXC];
  
  printf("MAX=%d\n",MAX(a,b));
  printf("MIN=%d\n",MIN(a,b));
  printf("MAXL=%d\n",MAXL);

#ifndef MAXL
#define MAXL 400
#endif

  printf("MAXL=%d\n",MAXL);
  
  return 0;
}
