#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x,Fx,fx;
	printf("Introducir el valor de x porfavor \n");
	scanf("%d",&x);
	if(x<=0){
		fx=x*x;
		Fx=fx-x;
	}
	else {
		fx=(-1)*x*x;
		Fx=fx+3*x;
	}
	printf("\n El valor de la funcion es %d \n",Fx);
  
  system("PAUSE");	
  return 0;
}
