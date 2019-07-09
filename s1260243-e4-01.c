#include <stdio.h>
#include <stdlib.h>

int main(){
  int x,y;
  
  x=rand()%6+1;
  y=rand()%6+1;

  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",x);
  printf("Die 2: %d\n",y);
  printf("Total value: %d\n",x+y);

   return 0;
}
