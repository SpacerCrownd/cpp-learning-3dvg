#include "Vector3.h"

using namespace MathVG;

Vector3::Vector3() : x(0), y(0), z(0)
{
}

Vector3::Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z)
{
}

Vector3 Vector3::operator+(const Vector3& v) const
{
	return Vector3(x + v.x, y + v.y, z + v.z);
}

Vector3 Vector3::operator*(float a) const
{
	return Vector3(x * a, y * a, z * a);
}

Vector3 Vector3::operator-(const Vector3& v) const
{
	return Vector3(x - v.x, y - v.y, z - v.z);
}

Vector3 Vector3::operator-() const
{
	return Vector3(-x, -y, -z);
}

float Vector3::dot(const Vector3& v, const Vector3& w)
{
	return v.x * w.x + v.y * w.y + v.z * w.z;
}

Vector3 Vector3::cross(const Vector3& v, const Vector3& w)
{
	return Vector3(
		v.y * w.z - w.y * v.z,
		v.x * w.z - w.x * v.z,
		v.x * w.y - w.x * v.y
	);
}