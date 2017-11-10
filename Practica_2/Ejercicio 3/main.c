#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int kwh,x,Kwh;
    float cargo,Cargo;
    printf("Introducir el consumo total porfavor \n");
    scanf("%d",&kwh);
    if (kwh>=1 && kwh<=50){
       x=52.84;        
       cargo=kwh*2.288;
       Cargo=x+cargo;
       printf("\nUsted debe %.2f \n",Cargo);
       }
  else {
       if (kwh>50 && kwh<=100){
       x=52.84+114.40;
       Kwh=kwh-50;
       cargo=Kwh*2.762;
       Cargo=x+cargo;
       printf("\nUsted debe %.2f \n",Cargo);}
       else {
       x=305.34;
       Kwh=kwh-100;
       cargo=Kwh*3.042;
       Cargo=x+cargo;
       printf("\nUsted debe %.2f \n",Cargo);     
            }
       }
  
  system("PAUSE");	
  return 0;
}
