#include <iostream>

int main (int argc, char *argv[]) {
	int Oceny[100];
	int Oceny_Ile = 0;

	float Srednia = 0;

	std::cout << "Aby zakończyć wpisz 0" << "\n";

	while(1) {
		std::cout << "Daj ocenę nr " << Oceny_Ile + 1 << ": ";
		std::cin >> Oceny[Oceny_Ile];

		if(Oceny[Oceny_Ile] == 0) { break; }
		
		Oceny_Ile++;
	}

	for(int i = 0; i < Oceny_Ile; i++) {
		Srednia += Oceny[i];
	}

	Srednia /= Oceny_Ile;

	std::cout << "Twoja średnia to: " << Srednia;

	return 0;
}
