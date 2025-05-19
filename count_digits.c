#include<stdio.h>

    int nbrchiffres (int N)
    {
        int nbr = 0 ;
        do{
            N = N / 10 ;
            nbr ++ ;
        }while( N != 0 );
        return nbr ;
    }
    int main()
    {
        int N ;
        scanf("%d", &N) ;
        printf("%d contient %d chiffre(s).",N,nbrchiffres(N) ) ;

        return 0 ;
    }