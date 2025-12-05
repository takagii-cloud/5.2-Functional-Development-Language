#include <stdio.h>
int main() {
    char prenom1, prenom2, prenom3; // Déclaration des trois variables

    printf("Bonjour, veuillez rentrer les trois intiales séparés d'un espace par lettre : ");  // Demande à l'utilisateur les initiales
    scanf("%c %c %c", &prenom1, &prenom2, &prenom3); // Lecture des entrées utilisateurs

    // Comparaison
    if (prenom3 > prenom2 && prenom2 > prenom1) { // 1.p1 2.p2 3.p3
        printf("1. prenom1, 2. prenom2, 3. prenom3\n");
    }   

    else if (prenom2 > prenom3 && prenom3 > prenom1) { // 1.p1 2.p3 3.p2
        printf("1. prenom1, 2. prenom3, 3. prenom2\n");
    }

    else if (prenom3 > prenom1 && prenom1 > prenom2) { //1.p2 2.p1 3.p3
        printf("1. prenom2, 2. prenom1, 3. prenom3\n");
    }

    else if (prenom1 > prenom3 && prenom3 > prenom2) { //1.p2 2.p3 3.p1
        printf("1. prenom2, 2. prenom2, 3. prenom1\n");
    }

    else if (prenom2 > prenom1 && prenom1 > prenom3) { //1.p3 2.p1 3.p2
        printf("1. prenom3, 2. prenom1, 3. prenom2\n");
    }

    else { //1.p3. 2.p2 3.p1
        printf("1. prenom3, 2. prenom2, 3. prenom1\n"); 
    }
}