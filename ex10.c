#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main() {
    int n, i, *tableau, target;

    printf("Entrer le nombre des elements : ");
    scanf("%d", &n);

    tableau = (int*) malloc(n * sizeof(int));
    if (tableau == NULL) {
        printf("Erreur ! in malloc");
        return 1;
    }


    for (i = 0; i < n; i++) {
        printf("Entrer element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Entrer l'element specifique : ");
    scanf("%d", &target);

    bool check = false;
    for (i = 0; i < n; i++) {
        if (tableau[i] == target) {
            printf("La position d'element %d est : %d.\n", target, i + 1);
            check = true;
            break;
        }
    }

    if (check == false) {
        printf("L'element %d y'a pas dans votre tableau.\n", target);
    }

    free(tableau);
    return 0;
}