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

float distance(float x1, float y1, float x2, float y2) { // Définitions des coordonnées de deux points en deux dimensions
    float distancepoints = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); // Calcul de la distance entre deux points
    return newton(distancepoints);
}

int main() {
    // Déclaration des variables pour les coordonnées
    float x1, y1, x2, y2;

    // Demande à l'utilisateur les coordonnées
    printf("Entrez des coordonnées de la forme (x1 y1 x2 y2) séparées par des espaces : ");

    // Lis l'entrée utilisateur
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    // Affichage de la distance
    printf("La distance entre les points est : %f\n", distance(x1, y1, x2, y2));

}
