#pragma once
#include <stdexcept>
#include <iostream>
#include "ErreurArithmetique.h"
class Fraction
{
public:
	int num;
	int den;
	Fraction();
	Fraction(int i);
	Fraction(int i, int j);
	double toDouble();
	friend Fraction operator+(Fraction f1, Fraction f2);
	friend Fraction operator-(Fraction f1, Fraction f2);
	friend Fraction operator*(Fraction f1, Fraction f2);
	friend Fraction operator/(Fraction f1, Fraction f2);
	~Fraction();
};
