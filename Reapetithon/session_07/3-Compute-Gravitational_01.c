// header file inclusion
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Definition of structure MassAndDistance
// capturing mass and distance data of
// objects
struct MassAndDistance
{
    double m1;
    double m2;
    double r;
};

// Function declaration
double ComputeGravitational(struct MassAndDistance *pData);

int main(void)
{
    // variables
    struct MassAndDistance earthSun_rs;
    struct MassAndDistance jupitorSun_rs;
    double forceBetweenEarthAndSun_rs;
    double forceBetweenJupitorAndSun_rs;

    // code
    earthSun_rs.m1 = 1.9891e30;
    earthSun_rs.m2 = 5.9722e24;
    earthSun_rs.r = 149597871000;

    forceBetweenEarthAndSun_rs = ComputeGravitational(&earthSun_rs);
    printf("Gravitational force between the sun and the earth = %lf Newton",
           forceBetweenEarthAndSun_rs);

    jupitorSun_rs.m1 = 1.9891e30;
    jupitorSun_rs.m2 = 1.89813e27;
    jupitorSun_rs.r = 760070000000;
    forceBetweenJupitorAndSun_rs = ComputeGravitational(&jupitorSun_rs);
    printf("Gravitational force between the sun and the jupitor = %lf Newton\n",
           forceBetweenJupitorAndSun_rs);

    return (0);
}

double ComputeGravitational(struct MassAndDistance *pData)
{
    // variable definitions
    double G = 6.67 * 10e-11; // Universal constant of gravitation
    double F;                 // For storing the amount of force in Newton

    if (pData->m1 <= 0.0 || pData->m2 <= 0.0 || pData->r <= 0.0)
        return (NAN);

    F = (G * pData->m1 * pData->m2) / (pData->r * pData->r);
    return (F);
}