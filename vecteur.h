#ifndef VECTEUR_H_INCLUDED
#define VECTEUR_H_INCLUDED

typedef struct tVecteur{
    int nX;
    int nY;
}tVecteur;

extern tVecteur additionVecteur(tVecteur Vecteur1, tVecteur Vecteur2);
extern tVecteur soustractionVecteur(tVecteur Vecteur1, tVecteur Vecteur2);
extern tVecteur multiplicationVecteur(tVecteur Vecteur1, tVecteur Vecteur2);
/*extern int produitVecteurScalaire();
extern int produitVecteurVectoriel();*/

#endif // VECTEUR_H_INCLUDED
