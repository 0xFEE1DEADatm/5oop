#include"Norm.h"

Norm::Norm()
{
	first = second = third = 0;
}
Norm::Norm(double x, double y)
{
	first = x;
	second = y;
}
Norm::Norm(double x, double y, double z)
{
	first = x;
	second = y;
	third = z;
}
Norm::Norm(Norm& n)
{
	first = n.first;
	second = n.second;
	third = n.third;
}
std::ostream& operator<<(std::ostream& out, Norm& n) 
{
		out << n.first << "  " << n.second << "  " << n.third;
	return out;
}
std::istream& operator>>(std::istream& in, Norm& n) 
{
		in >> n.first >> n.second >> n.third;
		std::cin.ignore();
	return in;
}
_____________
