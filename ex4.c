#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, plus_grand ;
    int *tab;    // btw u can just give the tab a value like int tab[50] and don't use malloc, 

    printf("Entrer nombre des elements : ");
    scanf("%d", &n);

    tab = (int *)malloc(n * sizeof(int));


    if (tab == NULL) {
        printf("Erreur ! ( malloc doesnt work)");
        return 1;  }

    for (i = 0; i < n; i++) {
        printf(" Element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    plus_grand = tab[0];
    for (i = 1; i < n; i++) {
        if (tab[i] > plus_grand) {
            plus_grand = tab[i]; 
        }
    }

    printf("Le plus grand element dans le tableux est : %d\n", plus_grand);



    free(tab);


    return 0;

    
}
