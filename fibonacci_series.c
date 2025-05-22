#include <stdio.h>
 
int main()
{
  int n, nbr1 = 0, nbr2 = 1, suivant, i;
 
  scanf("%d", &n);
 
  for (i = 0; i < 20; i++)
  {
    if (i <= 1)
      suivant = i;
    else
    {
      suivant = nbr1 + nbr2;
      nbr1 = nbr2;
      nbr2 = suivant;
    }
    printf("%d ", suivant);
  }
 
  return 0;
}