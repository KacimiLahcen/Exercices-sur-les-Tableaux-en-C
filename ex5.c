#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, plus_petit ;
    int *tab;  

    printf("Entrer nombre des elements : ");
    scanf("%d", &n);

    tab = (int *)malloc(n * sizeof(int));


    if (tab == NULL) {
        printf("Erreur ! ");
        return 1;  }

    for (i = 0; i < n; i++) {
        printf(" Element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    plus_petit = tab[0];
    for (i = 1; i < n; i++) {
        if (tab[i] < plus_petit) {
            plus_petit = tab[i]; 
        }
    }

    printf("Le plus petit element dans le tableux est : %d\n", plus_petit);



    free(tab);


    return 0;

    
}
