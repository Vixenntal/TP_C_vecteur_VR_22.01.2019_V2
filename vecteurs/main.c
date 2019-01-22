#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

#define TAILLETAB 50

int main()
{
    printf("Les Vecteurs !\n");

    tVecteur jeton;

    int nTab[TAILLETAB][TAILLETAB];

    initTab(nTab);

    printf("Entrez x du premier vecteur :\n");
    scanf("%d", &jeton.nX);
    printf("Entrez y du premier vecteur :\n");
    scanf("%d", &jeton.nY);

    printf("x = %d\n", jeton.nX);
    printf("y = %d", jeton.nY);

    //afficher(nTab);

    jeton.nX = 0;
    jeton.nY = 0;

    return 0;
}
