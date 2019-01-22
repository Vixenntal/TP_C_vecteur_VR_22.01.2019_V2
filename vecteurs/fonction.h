#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED

#define TAILLETAB 50

//type
typedef struct tVecteur
{
	int nX;
	int nY;
}tVecteur, *ptVecteur;

//prototype
extern void initTab(int nTab[TAILLETAB][TAILLETAB]);
extern void afficher(int nTab[TAILLETAB][TAILLETAB]);
extern void placer(int nTab[TAILLETAB][TAILLETAB], ptVecteur jeton, int nCpt);

#endif // FONCTION_H_INCLUDED
