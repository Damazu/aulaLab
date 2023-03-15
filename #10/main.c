#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    float altura;

    printf("preencha a idade\n");
    scanf("%d",&idade);

    printf("preencha a altura\n");
    scanf("%f",&altura);

    if((idade>5 && idade <=10)&&altura>=1.00){
        printf("categoria infantil");
    }else if((idade>10 && idade <=17)&&altura>=1.40){
        printf("categoria junior");
    }else if((idade>17 && idade <=35)&& altura>=1.70){
        printf("categoria profissional");
    }else if((idade>35)&&altura>=1.60){
        printf("categoria senior");
    }
    return 0;
}
