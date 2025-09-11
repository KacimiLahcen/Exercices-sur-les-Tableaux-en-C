#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, petit, toswap, *tabl;

    printf("Entrer nombre des elements: ");
    scanf("%d", &n);

    tabl = (int*) malloc(n * sizeof(int));

    if (tabl == NULL) {
        printf("Erreur ! in malloc");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Entrer l'element %d: ", i + 1);
        scanf("%d", &tabl[i]);
    }

    // Tri par selection
    for (i = 0; i < n - 1; i++) {
        petit = i;    // geuussing i (the first) is the min one 
        for (j = i + 1; j < n; j++) {
            if (tabl[j] < tabl[petit]) {
                petit = j;       //if that if happend then the j is the real mean one
            }
        }
        toswap = tabl[i];   // so here we swap their indexs , and we creaate toswp just to save the value of tabl[i] before pitting it in tabl [petit]
        tabl[i] = tabl[petit];
        tabl[petit] = toswap;
    }

    printf("Voici les element de tableux en croissant : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", tabl[i]);
    }
    printf("\n");

    free(tabl);
    return 0;
}
