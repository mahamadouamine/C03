#include<stdio.h>
int main()
{
    int limit;
    int a = 0, b = 1, temp;
    //lecture de la limite
    do{
        scanf("%d", &limit);
    }while(limit < 2);
    //affichage de la suite de fibonacci jusqu'à la limite
    printf("%d", a);
    while (b <= limit)
    {
        printf("%d",b);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
    return 0;
}