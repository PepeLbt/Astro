#include "astro.h"
#include <math.h>

double epsilon = 1e-13;

double getSchwarzschild(double masse, double vitesse, int param) {
    if(masse > ((double)0) && vitesse != ((double)0) && param !=((int)0)){
        //Exigences dérivées + Rajouter précision en exigence
        if ((pow( vitesse, ((double)2))) > epsilon) {
            return (double) (((double) 2) * CONSTANTE_G * masse / (pow( vitesse, ((double)2))));
        } else {
            return 0 ;
        } 
    } else {
        return 0;
    }
}

