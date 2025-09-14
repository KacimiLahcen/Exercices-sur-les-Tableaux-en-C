#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr, moyenne, somme=0;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
}



    for (i = 0; i < n; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        somme = somme + arr[i];
    }
    printf(" == >  La somme des elements est : %d \n", somme);

    moyenne = somme / n;
    printf(" == >  La moyenne est : %d", moyenne);

    free(arr);
    return 0;
}
