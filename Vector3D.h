#pragma once
#include"Norm.h"

class Vector3D : public Norm
{
	double x;
	double y;
	double z;
public:
	Vector3D() : Norm() {};
	Vector3D(double x, double y, double z) : Norm(first, second, third) {};
	Vector3D(Vector3D& v);

	double module() override;
	double norma() override;

	friend std::ostream& operator<<(std::ostream& out, Vector3D& v);
	friend std::istream& operator>>(std::istream& in, Vector3D& v);
};
