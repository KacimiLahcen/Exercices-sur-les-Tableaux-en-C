#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *tabl, facteur;

    printf("Entrer le nombre des elements : ");
    scanf("%d", &n);

    tabl = (int*) malloc(n * sizeof(int));

    if (tabl == NULL) {
        printf("Erreur !");
        return 1;  }

    for (i = 0; i < n; i++) {
        printf("Entrer ces elements %d : ", i + 1);
        scanf("%d", &tabl[i]);
    }

    printf("Entrer le facteur de multiplication : ");
    scanf("%d",&facteur);

    printf("Resultats : \n");
    for (i = 0; i < n; i++) {
        printf("%d x %d = %d \n", tabl[i], facteur, tabl[i] * facteur);
    }

    free(tabl);

    return 0;
}