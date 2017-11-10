#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float num1,num2,total;
    char operador;
    printf("Introducir los 2 numeros que se van a utilizar \n");
    scanf("%d",&num1);
    printf("\n");
    scanf("%d",&num2);
    printf("Introducir la operacion \n");
    scanf("%c",&operador);
    switch (operador){
           case '+': total=num1+num2; printf("El total es %.1f",total); break;
           case '-': total=num1-num2; printf("El total es %.1f",total); break;
           case '*': total=num1*num2; printf("El total es %.1f",total); break;
           case '/': total=num1/num2; printf("El total es %.1f",total); break;
           }
  
  system("PAUSE");	
  return 0;
}
