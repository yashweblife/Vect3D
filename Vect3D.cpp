#include "Arduino.h"
#include "Vect3D.h"

Vect3D::Vect3D(float _x, float _y, float _z)
{
    x = _x;
    y = _y;
    z = _z;
}
float Vect3D::getMag()
{
    return (sqrt(x * x + y * y + z * z))
}
void Vect3D::add(Vect3D &v)
{
    x += v.x;
    y += v.y;
    z += v.z;
}
void Vect3D::sub(Vect3D &v)
{
    x -= v.x;
    y -= v.y;
    z -= v.z;
}
void Vect3D::mul(Vect3D &v)
{
    x *= v.x;
    y *= v.y;
    z *= v.z;
}
void Vect3D::scale(float v)
{
    x *= v;
    y *= v;
    z *= v;
}
void Vect3D::normalize()
{
    float mag = sqrt(x * x + y * y + z * z);
    x /= mag;
    y /= mag;
    z /= mag;
}
void Vect3D::rotateX(float angle) {
    y = cos(angle)-sin(angle);
    z = sin(angle)+cos(angle);

}
void Vect3D::rotateY(float angle) {
    x = cos(angle) + sin(angle);
    z = -sin(angle) + cos(angle);
}
void Vect3D::rotateZ(float angle) {
    x = cos(angle) - sin(angle);
    y = sin(angle) + cos(angle);
}