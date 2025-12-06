#include <stdio.h>
int main() {
    // Déclaration des variables
    int n = 0;

    // Demande le nombre de lignes
    printf("Choisissez un nombre de lignes : ");

    // Lecture du nombre de lignes
    scanf("%d", &n);
    
    // Boucle en partant de i = 1, jusqu'à i inférieur ou égal à n, on incrémente i de +1
    for(int i = 1; i <= n; i++) {
        // Boucle en partant de j = 0, jusqu'à j inférieur à i, on incrémente j de +1
        for(int j = 0; j < i ; j++) {
            printf("*");
        }
        printf("\n");
    }
}