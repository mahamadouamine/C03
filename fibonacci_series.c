#include <stdio.h>  // Inclusion de la bibliothèque standard d'entrée/sortie

int main() {  // Déclaration de la fonction principale
  int limite, a = 0, b = 1, prochain;  // Déclaration des variables : limite saisie par l'utilisateur, a et b sont les deux premiers termes de Fibonacci, prochain est le terme suivant

  // Demander à l'utilisateur la limite
  scanf("%d", &limite);  // Lecture de la valeur maximale jusqu'où générer la suite de Fibonacci

  // Afficher les deux premiers nombres de la suite
  printf("Fibonacci : %d %d ", a, b);  // Affichage des deux premiers termes

  // Itérer pour générer et afficher la suite
  while ((prochain = a + b) <= limite) {  // Calculer le prochain terme et vérifier s’il est inférieur ou égal à la limite
    printf("%d ", prochain);  // Affichage du terme calculé
    a = b;  // Mise à jour : l'ancien b devient le nouveau a
    b = prochain;  // Mise à jour : le terme courant devient le nouveau b
  }

  return 0;  // Fin du programme
}