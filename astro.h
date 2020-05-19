#ifndef ASTRO_H
#define ASTRO_H
#define VITESSE 299792458
#define CONSTANTE_G 6.67300e-11
/* paramÃ¨tre : masse en kilogramme
   retourne : le rayon de Schwarzschild en mÃ¨tre */
double getSchwarzschild(double masse, double vitesse, int param);
#endif
