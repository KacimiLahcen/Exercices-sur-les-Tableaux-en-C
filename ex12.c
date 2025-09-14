#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr;

    printf("Entrez le nombre d'éléments : ");
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

    printf("Le tableau : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n Les nombres pairs : ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0){
            printf("%d ",arr[i]);
        }
    }

    free(arr);
    return 0;
}
