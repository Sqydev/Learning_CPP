#include <iostream>

void prostokąt() {
	float Bok;
	float Bok1;
	std::cout << "Podaj 1 bok: ";
	std::cin >> Bok;
	if(Bok <= 0) {
		std::cout << "...Bok jest mniejszy lub równy 0..." << "\n";
	}
	else {
		std::cout << "Podaj 2 bok: ";
		std::cin >> Bok1;
		if(Bok1 <= 0) {
			std::cout << "...Bok jest mniejszy lub równy 0..." << "\n";
		}
		else {
			std::cout << "Pole prostokątu == " << Bok*Bok1;
		}
	}
}

int main (int argc, char *argv[]) {
	prostokąt();

	return 0;
}
