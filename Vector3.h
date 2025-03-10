#pragma once
namespace MathVG
{
	class Vector3
	{
	public:
		float x, y, z;
		Vector3();
		Vector3(float _x, float _y, float _z);
		Vector3 operator +(const Vector3& v) const;
		Vector3 operator -() const;
		Vector3 operator -(const Vector3& v) const;
		Vector3 operator *(float k) const;
		static float dot(const Vector3& v, const Vector3& w);
		static Vector3 cross(const Vector3& v, const Vector3& w);
	};

	Vector3 lerp(const Vector3& a, const Vector3& b, float t)
	{
		return a * (1 - t) + b * t;
	}

	bool isZero(float a)
	{
		const float EPSILON = 1E-6;
		return (a > -EPSILON && a < EPSILON);
	}
}