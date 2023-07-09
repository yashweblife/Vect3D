#include "Arduino.h"
#include "Vect3D.h"

Vect3D::Vect3D(float _x, float _y, float _z)
{
    x = _x;
    y = _y;
    z = _z;
}
float Vect3D::getMag(){}
void Vect3D::add() {}
void Vect3D::sub() {}
void Vect3D::mul() {}
void Vect3D::scale() {}
void Vect3D::normalize() {}
void Vect3D::rotateX() {}
void Vect3D::rotateY() {}
void Vect3D::rotateZ() {}