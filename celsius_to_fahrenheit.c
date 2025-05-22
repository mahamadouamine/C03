#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties (scanf, printf)

int main()  // Déclaration de la fonction principale qui démarre le programme
{
    float c, ft;  // Déclaration de deux variables flottantes : c pour Celsius, ft pour Fahrenheit

    scanf("%f", &c);  // Lecture d'un nombre décimal saisi par l'utilisateur et stockage dans la variable c (température en °C)

    ft = (c * 1.8) + 32;  // Conversion de la température de Celsius en Fahrenheit avec la formule : F = C * 1.8 + 32

    printf("%.1f°C équivaut à %.1f°F\n", c, ft);  // Affichage du résultat avec 1 chiffre après la virgule

    return 0;  // Fin normale du programme, retourne 0 au système d'exploitation
}