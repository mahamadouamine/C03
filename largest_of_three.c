#include<stdio.h>
int main()
{
    int x,y,z;
    int resultat;

    scanf("%d %d %d", &x, &y, &z);
    //pour commencer , on suppose que x est le plus grand nombre
    resultat = x;

    if (y > resultat)
  {
        resultat = y;
  }
    if (z > resultat)
  {
        resultat = z;
  }
    printf("Le plus grand nombre est : %d\n", resultat);
    return 0;
}