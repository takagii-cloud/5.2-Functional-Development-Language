#include <stdio.h>

float newton(float k) {
    // Déclaration des variables
    float x = k; // Estimation
    int i; // Incrémentation

    for (i = 0; i < 15; i++) {
        x = x - (x * x - k) / (2 * x);
    }

    return x;
}

int main() {
    // Déclaration des variables
    float n;
    printf("Entrez un nombre : ");
    
    // Lecture de l'entrée utilisateur avec n = float à entrer
    scanf(" %f", &n);

    float r = newton(n);

    printf("Estimation après 15 fois de %f = %f\n", n, r);
}
