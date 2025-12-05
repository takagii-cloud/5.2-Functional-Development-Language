#include <stdio.h>
int main() {
    int entier = 0; // Définition de la variable entier

    printf("Bonjour, entrez un entier : "); // Demande à l'utilisateur un entier
    scanf("%d", &entier); // Permet de lire l'entrée utilisateur

    printf("Vous avez entré l'entier : %d\n", entier);

    int isPair = 0; // Définition d'une variable isPair à 0 par défaut pour dire qu'elle est fausse
    if (entier % 2 == 0) {
        isPair = 1; // Si l'entier est pair avec IsPair passe à 1
        printf("L'entier : %d est pair !\n", entier);
    }

    else {
        printf("L'entier : %d est impair !\n", entier);
    }
}
