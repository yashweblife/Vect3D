#include "Arduino.h"
#include "Vect3D.h"

Vect3D::Vect3D(float _x, float _y, float _z)
{
    x = _x;
    y = _y;
    z = _z;
}
float Vect3D::getMag(){}
void Vect3D::add(Vect3D &v) {}
void Vect3D::sub(Vect3D &v) {}
void Vect3D::mul(Vect3D &v) {}
void Vect3D::scale(float v) {}
void Vect3D::normalize() {}
void Vect3D::rotateX(float angle) {}
void Vect3D::rotateY(float angle) {}
void Vect3D::rotateZ(float angle) {}