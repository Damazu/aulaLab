#include <stdio.h>
#include <math.h>

int main(){

    int x, y, i;

    printf("preencha 1 para soma e 2 para raiz quadrada\n");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
        printf("Soma escolhida\n");
        
        printf("preencha primeiro valor\n");
        scanf("%d",&x);
        
        printf("preencha segundo valor\n");
        scanf("%d",&y);

        x = x + y;

        printf("Resultado: %d",x);
        break;
    case 2:
        printf("Raiz escolhida\n");
        
        printf("preencha o valor para a Raiz\n");
        scanf("%d",&x);

        x=sqrt(x);

        printf("Resultado: %d",x);

        break;
    
    default:
        break;
    }
}