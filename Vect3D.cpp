#include "Arduino.h"
#include "Vect3D.h"


/**
 * Create a vector with x y z values
*/
Vect3D::Vect3D(float _x, float _y, float _z)
{
    x = _x;
    y = _y;
    z = _z;
}
/**
 * Get the Magnitude of the vector
 * @return float
*/
float Vect3D::getMag()
{
    return (sqrt(x * x + y * y + z * z))
}
/**
 * Add a Vector to the current Vector
*/
void Vect3D::add(Vect3D &v)
{
    x += v.x;
    y += v.y;
    z += v.z;
}
/**
 * Subtract a Vector from the current Vector
*/
void Vect3D::sub(Vect3D &v)
{
    x -= v.x;
    y -= v.y;
    z -= v.z;
}
/**
 * Multiply a Vector to the current Vector, component wise
*/
void Vect3D::mul(Vect3D &v)
{
    x *= v.x;
    y *= v.y;
    z *= v.z;
}
/**
 * Scale the current Vector by some value 
*/
void Vect3D::scale(float v)
{
    x *= v;
    y *= v;
    z *= v;
}
/**
 * Normalize the current vector
*/
void Vect3D::normalize()
{
    float mag = sqrt(x * x + y * y + z * z);
    x /= mag;
    y /= mag;
    z /= mag;
}
/**
 * Rotate Around the X axis
*/
void Vect3D::rotateX(float angle) {
    y = cos(angle)-sin(angle);
    z = sin(angle)+cos(angle);

}
/**
 * Rotate around the Y axis
*/
void Vect3D::rotateY(float angle) {
    x = cos(angle) + sin(angle);
    z = -sin(angle) + cos(angle);
}
/**
 * Rotate around the Z axis
*/
void Vect3D::rotateZ(float angle) {
    x = cos(angle) - sin(angle);
    y = sin(angle) + cos(angle);
}