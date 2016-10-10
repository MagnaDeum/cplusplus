#include "Fraction.h"


Fraction::Fraction()
{

}

Fraction::Fraction(int entier)
{
	num = entier;
	den = 1;
}

Fraction::Fraction(int entier1, int entier2)
{
	if (entier2 == 0){
		throw ErreurArithmetique();
	}

	num = entier1;
	den = entier2;
}


Fraction operator+(Fraction f1, Fraction f2){
	Fraction temp;
	temp.num = (f1.num*f2.den) + (f2.num*f1.den);
	temp.den = f1.den*f2.den;
	return temp;
}

Fraction operator-(Fraction f1, Fraction f2){
	Fraction temp;
	temp.num = (f1.num*f2.den) - (f2.num*f1.den);
	temp.den = f1.den*f2.den;
	return temp;
}

Fraction operator*(Fraction f1, Fraction f2){
	Fraction temp;
	temp.num = f1.num*f2.num;
	temp.den = f1.den*f2.den;
	return temp;
}

Fraction operator/(Fraction f1, Fraction f2){
	Fraction temp;
	if (f2.num == 0){
		throw ErreurArithmetique();
	}
	temp.num = f1.num*f2.den;
	temp.den = f1.den*f2.num;
	return temp;
}

double Fraction::toDouble(){
	return num / den;
}

Fraction::~Fraction()
{
}
