#include <stdio.h>

int main() {
    int n, i, total=0 , tab[100];

    printf("Entrer le nombre des elements : ");
    scanf("%d", &n);

    printf(" saisie les elements : \n");
    for (i = 0; i < n; i++) {
        printf("L'element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }
 
    for (i = 0; i < n; i++) {
        total += tab[i];
    }

    printf("Total des elements est : %d\n", total);

    
    return 0;
}