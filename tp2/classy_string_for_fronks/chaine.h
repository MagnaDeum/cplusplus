#include <iostream>
#pragma once
class chaine
{
	char* curr_char;
	int length;

public:
	chaine();
	chaine(const char* c);
	chaine(const chaine &c);
	~chaine();

	friend bool operator==(const chaine &c1, const chaine &c2);
	friend bool operator<=(const chaine &c1, const chaine &c2);
	friend bool operator>=(const chaine &c1, const chaine &c2);
	friend bool operator<(const chaine &c1, const chaine &c2);
	friend bool operator>(const chaine &c1, const chaine &c2);
	friend chaine operator+(const chaine &c1, const chaine &c2);

	char chari(int i);
	void affiche() const;
};
