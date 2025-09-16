#include <iostream>

int prostokąt() {
	float Bok;
	float Bok1;
	std::cout << "Podaj 1 bok: ";
	std::cin >> Bok;
	if(Bok <= 0) {
		std::cout << "...Bok jest mniejszy lub równy 0..." << "\n";
		prostokąt();
		return 1;
	}
	std::cout << "Podaj 2 bok: ";
	std::cin >> Bok1;
	if(Bok1 <= 0) {
		std::cout << "...Bok jest mniejszy lub równy 0..." << "\n";
		prostokąt();
		return 1;
	}

	std::cout << "Pole prostokątu == " << Bok*Bok1;

	return 0;
}

int main (int argc, char *argv[]) {
	prostokąt();

	return 0;
}
