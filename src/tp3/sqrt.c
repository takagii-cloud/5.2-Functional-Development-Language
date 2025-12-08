#include <stdio.h>

int main() {
    // Définition des variables
    float k = 5;   
    float x0 = k;  
    float x1; // Première estimation
    float x2; // Deuxième estimation

    // Application de la formule : x_{n+1} = x_n - (x_n² - k) / (2 * x_n)
    x1 = x0 - (x0 * x0 - k) / (2 * x0);
    x2 = x1 - (x1 * x1 - k) / (2 * x1);

    printf("Estimation initiale x0 = %f\n", x0); // On a estimé x0 = 5
    printf("Après 1 itération : x1 = %f\n", x1); // Après avoir appliqué une fois la formule nous avons x1
    printf("Après 2 itérations : x2 = %f\n", x2); // ___________________________________________________x2

}
