//Napisac program obliczajacy wartosc wielomianow A(x) = ax^3 + bx^2 + cx + d oraz B(x) = ax^2 + bx + c
//dla pobieranej z klawiatury liczby x oraz zadanych 
//w kodzie wspolczynnikow a b c d wyniki tych dzialan program wypisuje na ekran konsoli.
#include <iostream>
using namespace std;

int main() {
	int a = 1, b = 3, c = 4, d = 2;
	int x;
	cout << "Insert x: ";
	cin >> x;
	int A;
	int B;
	A = a * (x * x * x) + b * (x * x) + c * x + d;
	B = a * (x * x) + b * x + c;
	cout << endl << "A(x) = " << A << endl;
	cout << "B(x) = " << B;

}