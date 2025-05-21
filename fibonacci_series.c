#include<stdio.h>// Inclusion de la bibliothèque standard d'entrée/sortie pour utiliser printf et scanf
int main()// Fonction principale du programme
{
    int limit;// Déclaration d'une variable entière pour stocker la limite supérieure de la suite
    int a = 0, b = 1, temp;// Initialisation des deux premiers termes de la suite de Fibonacci et d'une variable temporaire
    // Lecture de la limite, avec vérification que la valeur est supérieure à 2
    do{
        scanf("%d", &limit);// Demande à l'utilisateur d'entrer une valeur entière
    }while(limit <= 0);// Répète la lecture tant que la valeur est inférieure ou égale à 2
    // Affichage du premier terme de la suite (0)
    printf("%d ", a);
    // Boucle qui affiche les termes de la suite de Fibonacci inférieurs à la limite
    while (b < limit)
    {
        printf("%d ",b);// Affiche le terme courant
        temp = a + b;// Calcule le terme suivant en additionnant les deux précédents
        a = b;// Met à jour la valeur de a avec celle de b
        b = temp;// Met à jour la valeur de b avec le nouveau terme
    }
    printf("\n");// Termine l'affichage par un retour à la ligne
    return 0;// Indique que le programme s'est terminé avec succès
}