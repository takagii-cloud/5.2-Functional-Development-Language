#include <stdio.h>

int main() {
    int entree;
    int sommeentree = 0;
    int nbentree = 0;
    float moyenne;
    while (entree != -1) {
        // Demande et lit l'entrée utilisateur
        printf("Entrez un entier positif (-1 pour arrêter.) ");
        scanf("%d", &entree);

        // Somme la valeur entrée
        sommeentree = sommeentree + entree;

        // Incrémente le nombre d'entrée
        nbentree++;
    }



    // Calculer la moyenne
    moyenne = (float)(sommeentree+1)/(float)(nbentree-1.0);

    // Afficher la moyenne
    printf("La moyenne de ces %d entiers vaut : %f \n",nbentree-1, moyenne);
}