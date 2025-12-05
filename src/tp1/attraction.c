#include <stdio.h>
int main() {
    int age = 0; // Définition de la variable age

    printf("Bonjour, quel âge avez-vous ? "); // Demande à l'utilisateur son âge
    scanf("%d", &age); // Lis l'entrée age donnée par l'utilisateur

    // Si l'âge est supérieur ou égal à 60 ans
    if (age >= 60) {
        printf("Veuillez payer 10 euros.\n");
    }

    // Si l'âge est compris entre 20 inclus et 59 inclus
    else if (age >= 20 && age <= 59) {
        printf("Veuillez payer 50 euros.\n");
    }

    // Si l'âge est compris entre 5 inclus et 19 inclus
    else if (age >= 5 && age <= 19) {
        printf("Veuillez payer 15 euros.\n");
    }

    else {
        printf("C'est gratuit.\n");
    }
}