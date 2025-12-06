#include <stdio.h>

int main() {
    // Initialise un tableau de 5 entiers.
    int tableau[5] = {1, 2, 3, 4, 5};

    // Intialise les variables min et max.
    int min = tableau[0];
    int max = tableau[0];

    // Lis le tableau : Initialise le compteur i à 1, jusqu'à i = 4 et incrémente le i.
    for(int i = 1; i < 5; i++) {
        // Si la valeur i est plus grand que le max alors max devient le nouveau i.
        if(tableau[i] > max) {
            max = tableau[i];
        }

        // Si la valeur de i est plus petite que le min alors min devient le nouveau i.
        if(tableau[i] < min) {
            min = tableau[i];
        }
    }

    // Affichage des résultats.
    printf("Le max du tableau est : %d\n", max);
    printf("Le min du tableau est : %d\n", min);
}