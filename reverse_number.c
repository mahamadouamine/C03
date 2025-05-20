#include<stdio.h>
 int main()
 {
    int N , inv ;
    scanf("%d",&N) ;
    inv = 0 ;
    do 
    {
      inv = (inv*10) + (N%10) ;
      N = N/10 ;
    }while(N!=0) ;
    printf("Nombre inversé : %d",inv);

    return 0;
 }