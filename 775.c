#include <stdio.h>
int main()
{ 
 float peso, altura, imc;
 scanf("%f %f",&peso,&altura);
 imc=peso/(altura*altura);
   if (imc<18.5){
    printf("%.2f MAGREZA", imc);
   }
   else if ((imc>=18.5) && (imc<=24.9)){
    printf("%.2f SAUDAVEL", imc);
   }
   else if ((imc>=25) && (imc<=29.9)){
    printf("%.2f SOBREPESO", imc);
   }
   else{
    printf("%.2f OBESIDADE", imc);
  }
  return 0;
}
