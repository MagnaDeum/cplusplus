#include "chaine.h"

/* Constructeur qui cr�e une chaine vide
 * Constructeur par d�faut
 */
chaine::chaine(){
	curr_char = new char[1];
	length = 1;
	*curr_char = '\0';
	std::cout << "Cr�ation d'une chaine vide";
}

/* Constructeur qui prend en param�tre un tableau de char
 * Il faut aussi d�terminer la longueur de la chaine pass�e en param�tre
 */
chaine::chaine(const char * c){
	for (length = 0; c[length] != '\0'; length++) {	}
	curr_char = new char[length];
	for (int i = 0; i<length ;i++) {
		curr_char[i] = c[i];
	}
	std::cout << "Cr�ation d'une chaine de longueur " << length << " : ";
	affiche();
}

/* Constructeur qui recopie une chaine */
chaine::chaine(const chaine &c){
	for (length = 0; length != c.length; length++) {
		curr_char[length] = c.curr_char[length];
	}
	std::cout << "Cr�ation d'une chaine de longueur " << length << " : ";
	affiche();
}

/* Destructeur */
chaine::~chaine() {
	delete[] curr_char;
	std::cout << "Destruction de la chaine";
}

/* Surcharge des op�rateurs de comparaison */
bool operator==(const chaine &c1, const chaine &c2) {
	if (c1.length != c2.length) {
		return false;
	}
	for (int i = 0; i<c1.length; i++) {
		if (c1.curr_char[i] != c2.curr_char[i]) {
			return false;
		}
	}
	return true;
}

bool operator<=(const chaine &c1, const chaine &c2) {
	if (c1 == c2) {
		return true;
	}
	if (c1 < c2) {
		return true;
	}
	return false;
}

bool operator>=(const chaine &c1, const chaine &c2) {
	if (c1 == c2) {
		return true;
	}
	if (c1 > c2) {
		return true;
	}
	return false;
}

bool operator<(const chaine &c1, const chaine &c2) {
	if (c1 == c2) {
		return false;
	}
	int min;
	if (c1.length < c2.length) { min = c1.length; }
	else { min = c2.length; }
	for (int i = 0; i< min; i++) {
		if (c1.curr_char[i] < c2.curr_char[i]) { return true; }
		else if (c1.curr_char[i] > c2.curr_char[i]) { return false; }
	}
}

bool operator>(const chaine &c1, const chaine &c2) {
	if (c1 == c2) {
		return false;
	}
	int min;
	if (c1.length < c2.length) { min = c1.length; }
	else { min = c2.length; }
	for (int i = 0; i < min; i++) {
		if (c1.curr_char[i] < c2.curr_char[i]) { return false; }
		else if (c1.curr_char[i] > c2.curr_char[i]) { return true; }
	}
}

/* Concat�nation de deux chaines */
chaine operator+(const chaine &c1, const chaine &c2) {
	char * temp = new char[c1.length + c2.length];
	for (int i = 0; i < c1.length; i++) {
		temp[i] = c1.curr_char[i];
	}
	for (int i = 0; i < c2.length; i++) {
		temp[c1.length + i] = c2.curr_char[i];
	}
	return chaine(temp);
}

/* Renvoi du caract�re � l'index donn� */
char chaine::chari(int i) {
	return curr_char[i];
}

/* Affichage de la chaine */
void chaine::affiche() const {
	for (int i = 0; i < length - 1; i++) {
		std::cout << curr_char[i];
	}
}
