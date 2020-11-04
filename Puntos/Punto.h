/* Oliver Josué Padilla Quintanilla*/

#ifndef Punto_H
#define Punto_H

#include <iostream>
#include <array>

using namespace std;

class Punto2D
{
public:

    float SetPosicion(float a, float b);
    void Trasladar(float a, float b);
    void RotarRespectoAlOrigen(float a);
    void Escalar(float a, float b);
    float GetX();
    float GetY();

    // Escalar : Escala la posición del punto en el plano, como parámetros recibe el factor de escala sobre cada eje, primero sobre x y luego sobre y.

private:
	float x;
	float y;
};

#endif

