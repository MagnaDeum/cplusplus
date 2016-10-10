#include "Fraction.h"

int main(){
	Fraction f1 = Fraction(5);
	Fraction f2 = Fraction(2,3);
	try{
		Fraction f3 = Fraction(1, 0);
	}
	catch (ErreurArithmetique e){
		std::cout << "lel\n";
	}
	/*
	Pour detecter std::overflow_error et std::underflow_error :
		std::numeric_limits<int> : min(), max()
	si a>0 && b>0 || a<0 && b<0
		verif a+b < max
				a < max-b
	
	*/
}