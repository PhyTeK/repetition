/*

  Convert a binary into a decimal

    1010=0*2^0+1*2^1+0*2^2+1*2^3
    =2+8
    =10
  
  Convert a decimal into a binary
    
    12=1*10^1+2*10^0
    = 1010 + 10
    = 1100
  */



#include <stdio.h>
#include <math.h>


int bin2dec(long int,int *);
int dec2bin(int,long *);


int dec2bin(int d,long *b){
  /* Algorythm

    r = 12%2=6 rest 0
    b += 0*1 
    f = f*10 = 10
    d = 12/2 = 6
    r = 6%2= 3 rest 0
    b += 0*10  -> b=0
    f = f*10 = 100
  */

  long r,f=1;

  while(d != 0){
    r = d%2;
    *b += r*f;
    f *= 10;
    d /= 2;
  }

  return 0;
}

int bin2dec(long b,int *d){
  int i=0,r,m;

  /* Algorythm

    r1=b%10;   1010%10=101 rest 0
    r2=r1%10;  101%10=10 rest 1
    r3=r2%10;  10%10=1 rest 0
    r4=r3%10;  1%10=0 rest 1

  */
  
  while(b>=1){
    m=(int)b/10;
    r=b%10;
    *d += r*(int)powf(2,i++);
    b=m;
  }
  return 0;
}

int main(){
  int d=12,r=0;
  long b=1010,bb=0;

  bin2dec(b,&r);
  printf("%d -> %d\n",b,r);

  dec2bin(d,&bb);
  printf("%d -> %u\n",d,bb);

  return 0;
}
  
