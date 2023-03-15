#include <stdio.h>

int main(){
    int x, y;

    printf("Preencha o valor de X\n");
    scanf("%d",&x);

    printf("Preencha o valor de Y\n");
    scanf("%d",&y);

    if (x>y){

        printf("O valor de X e maior sendo ele %d",x);
    }else if(y>x){

        printf("O valor de Y e maior sendo ele %d",y);
    }else{
        
        printf("os valores X e Y sao iguais");
    }
    return 0;
    
}