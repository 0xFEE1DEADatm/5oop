#include"Vector3D.h"

Vector3D::Vector3D(Vector3D& v)
{
	x = v.x;
	y = v.y;
	z = v.z;
}
double Vector3D::module()
{
	return sqrt(x*x + y*y + z*z);
}
double Vector3D::norma()
{
	return sqrt(x * x + y * y + z * z);
}
std::ostream& operator<<(std::ostream& out, Vector3D& v)
{
	out << v.x << "  " << v.y << "  " << v.z;
	return out;
}
std::istream& operator>>(std::istream& in, Vector3D& v)
{
	in >> v.x >> v.y >> v.z;
	std::cin.ignore();
	return in;
}
