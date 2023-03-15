#include <stdio.h>
#include <stdlib.h>

int main()
{
   float salario,aumento;
    int i;
   printf("digite seu codigo:\n");
   scanf("%d",&i);

   switch(i)
   {
   case 1:
       printf("Digite seu salario atual\n");
       scanf("%f",&salario);

       aumento = salario * 0.5;
       salario = salario +aumento;

       printf("seu aumento e de %.2f\n",aumento);
       printf("seu salario e de %.2f",salario);
       break;
    case 2:
       printf("Digite seu salario atual\n");
       scanf("%f",&salario);

       aumento = salario * 0.35;
       salario = salario +aumento;

       printf("seu aumento e de %.2f\n",aumento);
       printf("seu salario e de %.2f",salario);

       break;

    case 3:
       printf("Digite seu salario atual\n");
       scanf("%f",&salario);

       aumento = salario * 0.2;
       salario = salario +aumento;

       printf("seu aumento e de %.2f\n",aumento);
       printf("seu salario e de %.2f",salario);
       break;

    case 4:
       printf("Digite seu salario atual\n");
       scanf("%f",&salario);

       aumento = salario * 0.1;
       salario = salario +aumento;

       printf("seu aumento e de %.2f\n",aumento);
       printf("seu salario e de %.2f",salario);
       break;

    case 5:
       printf("seu salario nao tera aumento");

       break;

    default:
        printf("Codigo invalido");
        break;
   }
    return 0;
}
