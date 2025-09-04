#include <iostream>
#include <ostream>

int main (int argc, char *argv[]) {
	float x;
	float y;
	char mode;

	float wynik;

	std::cout << "Pierwsza zmienna: ";
	// Input to cin
	std::cin >> x;

	std::cout << "Dróga zmienna: ";
	std::cin >> y;
	
	std::cout << "Tryb(-, +, /, *, itd): ";
	std::cin >> mode;

	if(mode == '+') {
		wynik = x + y;
	}
	else if(mode == '-') {
		wynik = x - y;
	}
	else if(mode == '*') {
		wynik = x * y;
	}
	else if(mode == '/') {
		wynik = x / y;
	}
	else {
		std::cout << "Zły tenteges";

		return 1;
	}

	std::cout << "Wynik: " << wynik << std::endl;

	return 0;
}
