#include "astro.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <errno.h>

int main()
{
    double speed = 1.0;
    double masse = 1.0;
    double schwarzschild ;
    int param = 1;
    double result;


    /* calcul du rayon de Swartzschild */
    schwarzschild = getSchwarzschild(masse, speed, param);
    result =  fabs(schwarzschild-1.335e-10);
    if (result < 1.0e-3 ){
        fprintf(stdout, "True Schwarzschild(%.3e kg) = %.3e m\n", masse, schwarzschild);
    } else {
        fprintf(stdout, "False Schwarzschild(%.3e kg) = %.3e m\n", masse, schwarzschild);
    }
    exit(EXIT_SUCCESS);
}
