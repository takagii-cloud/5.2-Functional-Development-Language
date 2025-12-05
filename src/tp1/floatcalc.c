#include <stdio.h>
int main() {
    float rayon = 0; // Définition d'une variable rayon

    printf("Bonjour, entrez un rayon : "); // Demande à l'utilisateur le rayon
    scanf("%f", &rayon); // Lis l'entrée utilisateur

    float surface = 0;
    surface = 3.14*(rayon*rayon); // Calcul de la surface

    printf("La surface vaut : %f\n", surface); // Affichage de la surface

    float perimetre = 0;
    perimetre = 2 * 3.14 * rayon; // Calcul du périmètre
        
    printf("Le périmètre vaut : %f\n", perimetre); //Affichage du périmètre
}