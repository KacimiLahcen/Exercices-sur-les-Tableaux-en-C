#include <stdio.h>
#include <stdlib.h>   // for operations mathematiques i think

int main() {
    int n, i;
    int *tab;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

     tab = (int *)malloc(n * sizeof(int));    //like reserving place for the user aamount of tab's elements

    
    if (tab == NULL) {
        printf("Erreur ! (maybe malloc doesnt works)");
        return 1;    // why return 1; and not break? cuz break can’t be used outside loops or switches. and return 1; means the program fail
    }

    
    printf("Entrez ces elements :\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Voici votre tableau :\n");
    for (int i = 0; i < n; i++) {
        printf("%d | ", tab[i]);
    }
    
    free(tab);   // Libérer la mémoire , to avoid memory problems in long running programs







    return 0;
}
