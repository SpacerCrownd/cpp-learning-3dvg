#include <stdlib.h>
#include <iostream>

class Vector3
{
public:
	float x, y, z;

	Vector3() : x(0), y(0), z(0)
	{ }

	Vector3(float _x, float _y, float _z): x(_x), y(_y), z(_z)
	{ }

	Vector3 operator +(const Vector3& v) const
	{
		return Vector3(x + v.x, y + v.y, z + v.z);
	}

	Vector3 operator *(const float a) const
	{
		return Vector3(x * a, y * a, z * a);
	}

	Vector3 operator -(const Vector3& v) const
	{
		return Vector3(x - v.x, y - v.y, z - v.z);
	}

	Vector3 operator -() const
	{
		return Vector3(-x, -y, -z);
	}
};

Vector3 lerp(const Vector3 a, const Vector3 b, const float t)
{
	return a * (1 - t) + b * t;
}

int main()
{
	std::cout << "Hello world" << std::endl;
	
	return 0;
}