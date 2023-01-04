//Napisz rekurencyjną funkcję, której argumentem jest liczba całkowita n(n > 0).Funkcja ma zwrócić
//wartość funkcji zadanej wzorem : f(x) = f(x − 1) + 2 · f(x − 2), gdzie f(0) = 0, f(1) = 1. Stwórz przypadek
//testowy.

#include <iostream>
using namespace std;

int f(int x) {
	if (x == 0) 
		return 0;
	else if (x == 1) 
		return 1;
	else 
		return f(x - 1) + 2 * f(x - 2);
}
void test() {
	cout << f(0) << endl;
	cout << f(1) << endl;
	cout << f(2) << endl;
	cout << f(3) << endl;
	cout << f(4) << endl;
	cout << f(5) << endl;
}
int main() {
	test();
}
