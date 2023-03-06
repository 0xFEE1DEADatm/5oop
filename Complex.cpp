#pragma once
#include"Complex.h"


Complex::Complex(Complex& c)
{
	re = c.re;
	im = c.im;
}
double Complex::module()
{
	return sqrt(re * re + im * im);
}
double Complex::norma()
{
	return module() * module();
}
std::ostream& operator<<(std::ostream& out, Complex& c)
{
	out << c.re << "  " << c.im;
	return out;
}
std::istream& operator>>(std::istream& in, Complex& c)
{
	in >> c.re >> c.im;
	std::cin.ignore();
	return in;
}
