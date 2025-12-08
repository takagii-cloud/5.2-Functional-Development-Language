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

int touch(float x1, float y1, float r1, float x2, float y2, float r2) {
    float distancepoints = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); // Calcul de la distance entre deux points
    float sommerayon = r1 + r2;
    return sommerayon;
    return newton(distancepoints); 

    if (sommerayon > distancepoints) { // Si le rayon est supérieur à la distance entre les points
        return 1; // Les cercles se touchent
    }

    else if (sommerayon < distancepoints) {
        return 0;
    }
}

int main() {   
    // Déclaration des variables
    float x1, y1, r1, x2, y2, r2;
    
    // Demande à l'utilisateur les coordonnées
    printf("Entrez des coordonnées de la forme (x1, y1, r1, x2, y2, r2) séparées par des espaces : ");

    // Lis l'entrée utilisateur
    scanf("%f %f %f %f %f %f", &x1, &y1, &r1, &x2, &y2, &r2);

    // Affichage final
    int result = touch(x1, y1, r1, x2, y2, r2);

    if (touch == 1) {
        printf("Les cercles se touchent");
    }

    else {
        printf("Les cercles ne se touchent pas ");
    }

}