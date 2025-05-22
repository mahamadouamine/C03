#include<stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties (scanf, printf)

// Définition de la fonction nbrchiffres qui calcule le nombre de chiffres d'un entier N
int nbrchiffres(int N)  
{
    int nbr = 0;  // Initialisation de la variable nbr à 0, elle servira à compter les chiffres

    // Boucle do-while pour diviser N par 10 jusqu'à ce qu'il devienne 0
    do {
        N = N / 10;  // On divise N par 10 à chaque itération pour éliminer le dernier chiffre
        nbr++;  // Incrémentation du compteur de chiffres
    } while (N != 0);  // Condition : continue tant que N n'est pas égal à 0

    return nbr;  // Retourne le nombre de chiffres
}

int main()  // Fonction principale qui démarre le programme
{
    int N;  // Déclaration de la variable N (nombre dont on veut connaître le nombre de chiffres)

    scanf("%d", &N);  // Lecture de l'entier N saisi par l'utilisateur

    printf("%d contient %d chiffre(s).", N, nbrchiffres(N));  // Affichage du résultat : nombre N et le nombre de chiffres calculé par nbrchiffres

    return 0;  // Fin du programme, retourne 0 pour indiquer une exécution réussie
}