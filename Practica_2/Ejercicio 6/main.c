#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float x,fx,i;
    for (x=0;x<=10;x+=.5){
    fx=sin(2*x)-x;
    printf("\n X=%.1f Fx=%.4f \n",x,fx);
    }
  
  system("PAUSE");	
  return 0;
}
