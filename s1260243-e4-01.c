#include <stdio.h>
#include <stdlib.h>

int main(){
  int x,y;
  char c[20];

  printf("This is dice game.\n");

  printf("What is your name?\n");
  scanf("%s",c);
  printf("Hello, %s!\n",c);
  
  x=rand()%6+1;
  y=rand()%6+1;

  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",x);
  printf("Die 2: %d\n",y);
  printf("Total value: %d\n",x+y);

  if((x+y)>7) printf("%s won!\n",c);
  else printf("%s lost!\n",c);

   return 0;
}
