#include "vecteur.h"

tVecteur additionVecteur(const tVecteur Vecteur1,const tVecteur Vecteur2){
    int nSommeX;
    int nSommeY;
    tVecteur nSomme;
    nSommeX=(Vecteur1.nX)+(Vecteur2.nX);
    nSommeY=(Vecteur1.nY)+(Vecteur2.nY);
    nSomme.nX=nSommeX;
    nSomme.nY=nSommeY;
    printf("x:%d , y:%d\n",nSomme.nX,nSomme.nY);

    return nSomme;
}

tVecteur soustractionVecteur(const tVecteur Vecteur1,const tVecteur Vecteur2){
    int nDifferenceX;
    int nDifferenceY;
    tVecteur nDifference;
    nDifferenceX=(Vecteur1.nX)-(Vecteur2.nX);
    nDifferenceY=(Vecteur1.nY)-(Vecteur2.nY);
    nDifference.nX=nDifferenceX;
    nDifference.nY=nDifferenceY;
    printf("x:%d , y:%d\n",nDifference.nX,nDifference.nY);

    return nDifference;
}

tVecteur multiplicationVecteur(const tVecteur Vecteur1,const tVecteur Vecteur2){
    int nProduitX;
    int nProduitY;
    tVecteur nProduit;
    nProduitX=(Vecteur1.nX)*(Vecteur2.nX);
    nProduitY=(Vecteur1.nY)*(Vecteur2.nY);
    nProduit.nX=nProduitX;
    nProduit.nY=nProduitY;
    printf("x:%d , y:%d\n",nProduit.nX,nProduit.nY);

    return nProduit;
}
