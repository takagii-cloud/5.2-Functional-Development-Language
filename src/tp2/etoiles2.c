#include <stdio.h>

int main() {
    // Déclaration des variables
    int n = 0;
    char sens;

    // Demande le nombre de lignes
    printf("Choisissez un nombre de lignes : ");
    scanf("%d", &n);

    // Demande à l'utilisateur le côté de la pointe
    printf("Choisissez un côté de pointe (g pour gauche et d pour droite) : ");
    scanf(" %c", &sens); 

    // Si pointe à gauche
    if (sens == 'g') {
        // On boucle en partant de i = 1 et on incrémente jusqu'à i <= n.
        for (int i = 1; i <= n; i++) {
            // On boucle en partant de j = 0 et on incrémente jusqu'à j < i.
            for (int j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    // Si pointe à droite
    if (sens == 'd') {
        for (int i = 1; i <= n; i++) {
            for (int s = 0; s < n - i; s++) {
                printf(" "); 
            }
            for (int j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}