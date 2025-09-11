#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *tableau1, *tableau2;

    printf("Entrer nombre des elements : ");
    scanf("%d", &n);

    tableau1 = (int*) malloc(n * sizeof(int));
    if (tableau1 == NULL) {
        printf("Erreur ! in malloc");
        return 1;
    }

    tableau2 = (int*) malloc(n * sizeof(int));
    if (tableau2 == NULL) {
        printf("Erreur ! in malloc");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Entrer element %d : ", i + 1);
        scanf("%d", &tableau1[i]);
    }

    printf("Tableau origin : ");
    for (i = 0; i < n; i++) {
        printf("%d ",tableau1[i]);
    }

    printf("\nTableau copie : ");
        for (i = 0; i < n; i++) {
        tableau2[i] = tableau1[i];
        printf("%d ",tableau2[i]);
    }

    free(tableau1);
    free(tableau2);

    return 0;
}