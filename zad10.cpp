//Napisz program sprawdzający czy liczba podana z klawiatury może być rokiem przestępnym
#include <iostream>
using namespace std;

int main() {
	int rok;
	cout << "Wpisz rok: ";
	cin >> rok;
	if ((rok % 4 == 0 and rok % 100 != 0) or rok % 400 == 0) {
		cout << "Rok przestepny.";
		return 0;
	}
	else {
		cout << "Rok nie jest przestepny";
	}

}