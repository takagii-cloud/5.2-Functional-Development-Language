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
        // Compare la valeur de i à i+1 donc au début tab[0] à tab[1], si tab[i] >tab[i+1] alors on passe la tableau n'est pas trié et on change la valeur de Tri
        if (tab[i]>tab[i+1]) {
            Tri = 0; // Donc le tableau n'est pas trié
        }
    }

    // Affichage
    if (Tri == 1) {
        printf("Le tableau est trié\n");
    }

    else {
        printf("Le tableau n'est pas trié\n");
    }
}