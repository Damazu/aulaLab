#include <stdio.h>

int main(){
    int p = 1, q = 0;

    if (!p){
        printf("true\n");
    }else{
        printf("false\n");
    }
     if (!q)
    {
        printf("true\n");
    }else
    {
        printf("false\n");
    }
    if (p && q)
    {
        printf("true\n");
    }else
    {
        printf("false\n");
    }
    if (p || q)
    {
        printf("true\n");
    }else
    {
        printf("false\n");
    }
    if ((!p) && q)
    {
        printf("true\n");
    }else
    {
        printf("false\n");
    }
    if ((!p) || q)
    {
        printf("true\n");
    }else
    {
        printf("false\n");
    }
    if (p && (!q))
    {
        printf("true\n");
    }else
    {
        printf("false\n");
    }
    if (p || (!q))
    {
        printf("true\n");
    }else
    {
        printf("false\n");
    }
    if ((!p) && (!q))
    {
        printf("true\n");
    }else
    {
        printf("false\n");
    }
    if ((!p)||(!q))
    {
        printf("true\n");
    }else
    {
        printf("false\n");
    }
    
    
    return 0;
}