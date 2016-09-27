#include "chaine.h"

int main() {
	char temp1[3] = { 's', 'l', 't' };
	char temp2[5] = { 'a', 'b', 'c','d','e' };
	chaine c1 = chaine(temp1);
	chaine c2 = chaine(temp2);
	chaine c3 = c1+c2;
	if (c1 == c2) { std::cout << "c1==c2"; }
	else { std::cout << "c1 != c2"; }
	if (c1 < c2) { std::cout << "c1<c2"; }
	else if(c1 > c2) { std::cout << "c1 > c2"; }
	std::cout << c1.chari(2);
}