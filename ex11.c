#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr, oldElem, newVal;

    printf("Entrer nombre d'�l�ments: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

        if (arr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
}

    for (i = 0; i < n; i++) {
        printf("Entrer l'element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("le tableau : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Saisissez l'�l�ment � remplacer (ou saisissez 0 pour aucun) : ");
    scanf("%d", &oldElem);

    if (oldElem == 0) {
    printf("Le tableau : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    }

    printf("Entrez la nouvelle valeur : ");
    scanf("%d", &newVal);

    for (i = 0; i < n; i++) {
        if (i == oldElem - 1) {
            arr[i] = newVal;
        }
    }

    printf("Tableau modifi�: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
