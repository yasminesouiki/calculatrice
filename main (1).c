#include <stdio.h>
#include <stdlib.h>

void afficherMenu() {
    printf("=== Calculatrice ===\n");
    printf("1. Addition (+)\n");
    printf("2. Soustraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Quitter\n");
    printf("=====================\n");
    printf("Entrez votre choix : ");
}

int main() {
    int choix;
    double num1, num2, resultat;

    do {
        afficherMenu();
        scanf("%d", &choix);

        if (choix >= 1 && choix <= 4) {
            printf("Entrez le premier nombre : ");
            scanf("%lf", &num1);
            printf("Entrez le second nombre : ");
            scanf("%lf", &num2);

            switch (choix) {
                case 1:
                    resultat = num1 + num2;
                    printf("Résultat : %.2lf\n", resultat);
                    break;
                case 2:
                    resultat = num1 - num2;
                    printf("Résultat : %.2lf\n", resultat);
                    break;
                case 3:
                    resultat = num1 * num2;
                    printf("Résultat : %.2lf\n", resultat);
                    break;
                case 4:
                    if (num2 != 0) {
                        resultat = num1 / num2;
                        printf("Résultat : %.2lf\n", resultat);
                    } else {
                        printf("Erreur : Division par zéro !\n");
                    }
                    break;
                default:
                    printf("Choix invalide.\n");
            }
        } else if (choix != 5) {
            printf("Choix invalide. Veuillez réessayer.\n");
        }
        printf("\n");
    } while (choix != 5);

    printf("Merci d'avoir utilisé la calculatrice. Au revoir !\n");
    return 0;
}

