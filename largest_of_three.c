#include<stdio.h>// Inclusion de la bibliothèque standard pour l'entrée/sortie (printf, scanf)
int main()// Début du programme
{
    int x,y,z;// Déclaration de trois variables entières pour stocker les nombres entrés
    int resultat;// Variable pour stocker le plus grand des trois nombres

    scanf("%d %d %d", &x, &y, &z);// Lecture des trois entiers entrés par l'utilisateur
    //pour commencer , on suppose que x est le plus grand nombre
    resultat = x; //initialisation de resultat = x


    if (y > resultat)  // Si y est plus grand que le resultat actuel (x)
  {
        resultat = y;// Alors on met à jour resultat avec la valeur de y
  }
    if (z > resultat)// Si z est plus grand que le resultat actuel
  {
        resultat = z; // Alors on met à jour resultat avec la valeur de z
  }
     // Affichage du plus grand nombre trouvé
    printf("Le plus grand nombre est : %d\n", resultat);
    return 0;// Fin du programme
}