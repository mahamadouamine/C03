#include<stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties (scanf, printf)

int main()  // Fonction principale qui démarre le programme
{
    int N, inv;  // Déclaration de deux variables entières : N pour le nombre à inverser, inv pour stocker le nombre inversé

    scanf("%d", &N);  // Lecture de l'entier N saisi par l'utilisateur

    inv = 0;  // Initialisation de la variable inv à 0. Cette variable accumulera le nombre inversé

    // Début de la boucle do-while qui inverse le nombre N
    do 
    {
        inv = (inv * 10) + (N % 10);  // On extrait le dernier chiffre de N (N % 10), on l'ajoute à inv, en décalant inv d'un chiffre vers la gauche (inv * 10)
        N = N / 10;  // On supprime le dernier chiffre de N (division entière par 10)
    } while(N != 0);  // La boucle continue tant que N n'est pas égal à 0

    printf("Nombre inversé : %d", inv);  // Affichage du nombre inversé

    return 0;  // Fin du programme, retourne 0 pour indiquer une exécution réussie
}