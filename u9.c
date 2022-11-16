/*
  kunna skapa en struct och en instans.
*/
#include <stdio.h>

struct Point{   // First way to declare a struct
  float x;
  float y;
};

typedef struct{ // Second way
  float x;
  float y;
} Pointt;


void main(){
  struct Point P1,P2;  // Here we need to repeat struct
  Pointt M1;           // Pointt is defined above
  P1.x=1.23;
  P1.y=2.34;
  P2.x=5.12;
  P2.y=0.23;
  M1.x=3.14;
  M1.y=0.02;
  
  printf("%f %f\n",P1.x,P2.x);
  printf("%f %f\n",M1.x,M1.y);
    
}
