#include <stdio.h>
#include <math.h>

int main(){
    int R = 2,S = 5,T = -1,X = 3, Y = 1, Z = 0;


    if ( (R>=5) || (T > Z && X - Y + R > 3 * Z))
    {
        printf("A: true\n");
    }else
    {
        printf("A: false\n");
    }
    if ( (abs(T) + 3 >= 4) && !(3 * R / 2 < S * 3))
    {
        printf("B: true\n");
    }else
    {
        printf("B: false\n");
    }


    if ( (X == 2) || (Y == 1) &&((Z==0) || (R>3)) && (S<10))
    {
        printf("C: true\n");
    }else
    {
        printf("C: false\n");
    }

    if ((R != S) || !(sqrt(R) < sqrt(X)) &&(4327 * X * S * Z == 0))
    {
        printf("D: true");
    }else
    {
        printf("D: false");
    }
    
    
    
    return 0;
}