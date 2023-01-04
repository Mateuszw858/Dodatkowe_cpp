#include <iostream>
#include <string>
using namespace std;

int main() {
	string num;
	int sum_even = 0;
	int sum_odd = 0;
	cout << "Enter number series: ";
	cin >> num;
	int length = num.length();
	for (int i = 0; i < length; i++) {
		int digit = num[i] - '0';
		if (digit % 2 == 0) {
			sum_even += digit;
		}
		else {
			sum_odd += digit;
		}
	}
	cout << "Sum of even numbers: " << sum_even << endl;
	cout << "Sum of odd numbers: " << sum_odd;
	return 0;
}