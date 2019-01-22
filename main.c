#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"

int main(){

    tVecteur Vecteur1={2,3};
    tVecteur Vecteur2={1,2};

    additionVecteur(Vecteur1,Vecteur2);
    soustractionVecteur(Vecteur1,Vecteur2);
    multiplicationVecteur(Vecteur1,Vecteur2);
    /*produitVecteurScalaire();
    produitVecteurVectoriel();*/

    return 0;
}
