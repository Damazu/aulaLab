#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    float media;
    
    printf("insira a sua primeira nota\n");
    scanf("%d",&a);
    
    printf("insira a sua segunda nota\n");
    scanf("%d",&b);
    
    printf("insira a sua terceira nota\n");
    scanf("%d",&c);

    media = (a+b+c)/3;

    printf("O valor da sua media foi %.1f e voce foi ",media);



    if (media>=0 && media<4)
    {
        printf("Reprovado");
    }else if (media>=4 && media<7)
    {
        printf("Recuperacao");
    }else if(media>=7 && media<=10)
    {
        printf("Aprovado");
    }else
    {
        printf("valor inexistente");
    }
    
    
}