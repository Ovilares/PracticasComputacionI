/* Oliver Josué Padilla Quintanilla*/

#include <iostream>
#include <array>

#include "Punto.h"

using namespace std;

void Punto2D::SetPosicion(float a, float b)
{
	x = a;
	y = b;
}

void Punto2D::Trasladar(float a, float b)
{
	x += a;
	y += b;
}

void Punto2D::RotarRespectoAlOrigen(float g)
{
	float r = g * (3.14159 / 180);
	float rx = x * (cos(r)) - y * (sin(r));
	float ry = x * (sin(r)) + y * (cos(r));
	x = rx;
	y = ry;
}

void Punto2D::Escalar(float a, float b)
{
	x = a * x;
	y = b * y;
}

float Punto2D::GetX()
{
	return x;
}

float Punto2D::GetY()
{
	return y;
}
