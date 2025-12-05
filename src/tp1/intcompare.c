#include <stdio.h>

int main() {
    int entier1, entier2 = 0; // Définition de deux variables pour nos deux entiers
    
    printf("Entrez deux entiers séparés par un espace : "); // Demande deux entiers à l'utilisateurs
    scanf("%d %d", &entier1, &entier2); // Lecture des deux entiers

    if (entier1 > entier2) { // Si l'entier 1 est le plus grand
        printf("L'entier : %d est le plus grand !\n", entier1);
    }

    else if (entier2 > entier1) { // Si l'entier 2 est le plus grand
        printf("L'entier : %d est le plus grand !\n", entier2);
    }

    else {
        printf("Les deux entiers sont égaux\n"); // Si les deux entiers sont égaux
    }

    int valabsolue1 = entier1, valabsolue2 = entier2; // Définition de deux variables valeurs absolues
    if (entier1 < 0) { // Si l'entier est inférieur à 0 alors il est négatif donc sa valeur absolue sera positive
        valabsolue1 = -(entier1);
    }

    else {
        valabsolue1 = entier1;
    }

    if (entier2 < 0) { // Si l'entier est inférieur à 0 alors il est négatif donc sa valeur absolue sera positive
        valabsolue2 = -(entier2);
    }

    else {
        valabsolue2 = entier2;
    }

    printf("Les valeurs absolues de nos deux entiers valent : %d et %d !\n", valabsolue1, valabsolue2);

    if (valabsolue1 > valabsolue2) { // Si la valeur absolue1 est la plus grande
        printf("La valeur absolue : %d est la plus grande !\n", valabsolue1);
    }

    else if (valabsolue2 > valabsolue1) { // Si la valeur absolue2 est la plus grande
        printf("La valeur absolue : %d est la plus grande !\n", valabsolue2);
    }

    else {
        printf("Les deux valeurs absolues sont égales\n"); // Si les deux valeurs absolues sont égales
    }
}
