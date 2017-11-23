#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a,b,c,d,e,sum,prom;
    printf("Ingresar las calificaciones porfavor \n");
    scanf("%d",&a);
    printf("\n");
    scanf("%d",&b);
    printf("\n");
    scanf("%d",&c);
    printf("\n");
    scanf("%d",&d);
    printf("\n");
    scanf("%d",&e);
    printf("\n");
  sum=a+b+c+d+e;
  prom=sum/5;
  if (sum>=6){
     printf("\n Aprobado con %d \n",prom);         
              }
   else {
        printf("\n No aprobado con %d \n",prom);
        }           
              
  system("PAUSE");	
  return 0;
}
