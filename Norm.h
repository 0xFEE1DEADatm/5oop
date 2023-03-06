#pragma once
#include<iostream>
#include <cmath>
#include <string>
#include <ctime>

class Norm
{
public:
	double first;
	double second;
	double third;

	Norm();
	Norm(double x, double y);
	Norm(double x, double y, double z);
	Norm(Norm& n);

	virtual double norma() { return first; };
	virtual double module() { return first; };

	friend std::ostream& operator<<(std::ostream& out,Norm& n);
	friend std::istream& operator>>(std::istream& in, Norm& n);
};
