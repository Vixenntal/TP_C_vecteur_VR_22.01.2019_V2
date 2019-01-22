#include "fonction.h"

void initTab(int nTab[TAILLETAB][TAILLETAB])
{
	for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            nTab[i][j] = 0;
        }
    }
}

void afficher(int nTab[TAILLETAB][TAILLETAB])
{
	for (int nY = 0; nY < TAILLETAB; ++nY)
    {
        for (int nX = 0; nX < TAILLETAB; ++nX)
        {
            printf("%2d ", nTab[nX][nY]);
        }
        printf("\n");
    }
}

void placer(int nTab[TAILLETAB][TAILLETAB], ptVecteur jeton, int nCpt)
{
	nTab[(*jeton).nX][(*jeton).nY] = nCpt;
}