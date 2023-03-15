#include <stdio.h>
#include <stdlib.h>
    
int main(){
    int x;

    printf("Digite um valor\n");
    scanf("%i",&x);

    if (x % 2 ==0)
    {
        printf("esse valor e par");
    }else
    {
        printf("esse valor e impar");
    }
    
    
    return 0;
}