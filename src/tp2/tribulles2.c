#include <stdio.h>
int main() {
    // Création d' un tableau de longueur 6
    int tab[6];
    int Tri = 1; // On considère au départ que notre tableau est trié

    // Demande à l'utilisateur d'entrer des valeurs
    printf("Entrez 6 valeurs (séparés par un espace) : ");

    // Lis l'entrée en bouclant sur les entrées utilisateurs
    // Boucle de 0 jusqu'à 5 (6 entrées)
    for (int i = 0; i < 6; i++) {
        scanf(" %d", &tab[i]);
    }

    // Lecture du tableau en partant du premier élément tab[0]
    for (int i = 0; i < 5; i++) {
        // On boucle sur les éléments de i
        for (int j = 0; j < 5; j++) {
            // Si l'élément i est plus grand que i+1 c'est que le tableau n'est pas trié et que i+1 doit être à la place de i
            if (tab[j] > tab[j+1]) {
                int temp = tab[j+1]; // On temporise le i+1 dans une variable
                tab[j+1] = tab[j]; // On donne à j+1 la valeur de j 
                tab[j] = temp; // j devient j+1
            }
        }
    }

    // Affichage du tableau une fois trié
    for (int i = 0; i < 6; i++) {
        printf("%d", tab[i]);
    }
}