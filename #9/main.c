#include <stdio.h>
#include <stdlib.h>

int main()
{
   int idade;

   printf("preencha a sua idade\n");
   scanf("%d",&idade);

   if(idade<5){
    printf("voce esta inapito para nadar");
   }else if(idade>=5 && idade <=7){
    printf("Categoria infantil");
   }else if(idade>7 && idade<=10){
    printf("Categoria Juvenil");
   }else if(idade>10 && idade<=15){
    printf("Categoria Adolescente");
   }else if(idade>15 && idade<=30){
    printf("Categoria Adulto");
   }else if(idade>30){
    printf("Categoria Senior");
   }
       return 0;
}
