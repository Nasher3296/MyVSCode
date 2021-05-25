#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, pares=0, impares=0,i;
    for(i=0;i<3;i++)
    {
        printf("Ingrese un numero");
        scanf("%d",num);
        if(num % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }
    printf("PARES: %d \nImpares: %d",pares,impares);
    return 0;
}