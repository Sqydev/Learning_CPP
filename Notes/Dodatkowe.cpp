#include <iostream>

using namespace std;

int main() {
	int Liczby;
	int Liczby1;
	int Liczby2;
	int buff;

	cout << "1 liczba: ";
	cin >> Liczby;
	cout << "\n";

	cout << "2 liczba: ";
	cin >> Liczby1;
	cout << "\n";
	
	cout << "3 liczba: ";
	cin >> Liczby2;
	cout << "\n";

	cout << "Nieposortowane: | ";
	cout << Liczby << " | ";
	cout << Liczby1 << " | ";
	cout << Liczby2 << " | ";
	cout << "\n";


	if(Liczby > Liczby1) {
		buff = Liczby;
		Liczby = Liczby1;
		Liczby1 = buff;
	}
	if(Liczby1 > Liczby2) {
		buff = Liczby1;
		Liczby1 = Liczby2;
		Liczby2 = buff;
	}
	if(Liczby > Liczby1) {
		buff = Liczby;
		Liczby = Liczby1;
		Liczby1 = buff;
	}

	cout << "Posortowane: | ";
	cout << Liczby << " | ";
	cout << Liczby1 << " | ";
	cout << Liczby2 << " | ";
}
