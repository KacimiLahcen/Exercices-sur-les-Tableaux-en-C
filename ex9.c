#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *tableau;

    printf("Enter the number of elements : ");
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

    printf("Inversion de Tableau : ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", tableau[i]);
    }

    free(tableau);

    return 0;
}