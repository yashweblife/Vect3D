#ifndef Vect3D_h
#define Vect3D_h
#include "Arduino.h"
class Vect3D
{
public:
    float x;
    float y;
    float z;
    Vect3D(float _x, float _y, float _z);
    float getMag();
    void add(Vect3D &);
    void sub(Vect3D &);
    void mul(Vect3D &);
    void normalize();
    void scale(float val);
    void rotateX(float angle);
    void rotateY(float angle);
    void rotateZ(float angle);
};
#endif