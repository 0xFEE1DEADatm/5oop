#pragma once
#include"Norm.h"

class Complex : public Norm
{
	double re;
	double im;
	double mn;
public:
	Complex():Norm(){};
	//Complex(double re, double im, double mn) : Norm(first, second, third) {};
	Complex(double re, double im) : Norm(first, second) {};
	Complex(Complex& c);

	double module() override;
	double norma() override;

	friend std::ostream& operator<<(std::ostream& out, Complex& c);
	friend std::istream& operator>>(std::istream& in, Complex& c);
};
