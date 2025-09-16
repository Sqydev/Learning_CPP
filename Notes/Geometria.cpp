#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>

int main (int argc, char *argv[]) {
	float promien;

	if(promien < 0) { std::cout << "Zły promień"; return 1; }

	std::cout << "Obliczacz kół: ";

	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	
	std::cout << "Promień koła: ";
	std::cin >> promien;

	std::cout << "\n";
	std::cout << "Pole koła: ";
	std::cout << M_PI * (promien * promien);
	
	std::cout << "\n";
	std::cout << "Obwód koła: ";
	std::cout << 2 * promien * M_PI;
	
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	
	float podstawa;
	float wysokosc;

	std::cout << "Obliczasz pola trójkąta: ";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";

	std::cout << "Podstawa = ";
	std::cin >> podstawa;

	std::cout << "\n";
	std::cout << "Wysokości = ";
	std::cin >> wysokosc;

	std::cout << "\n";
	std::cout << "Pole trójkąta: " << (podstawa * wysokosc)/ 2;

	std::cout << "\n";

	return 0;
}
