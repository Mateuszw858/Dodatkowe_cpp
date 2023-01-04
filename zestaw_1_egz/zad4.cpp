//Napisz funkcję, która przyjmuje jako argument tablicę liczb wymiernych oraz jej rozmiar i zwraca
//największą ujemną liczbę w tej tablicy.W przypadku braku liczb ujemnych w tablicy, funkcja ma zwrócić
//zero.Stwórz przypadek testowy.

#include <iostream>
using namespace std;


int check(int tab[], int size) {
    int highest_negative = -2147483648;
    for (int i = 0; i < size; i++) {
        if (tab[i] < 0 && tab[i] > highest_negative) {
            highest_negative = tab[i];
        }
    }
    if (highest_negative == -2147483648) {
        return 0;
    }
    return highest_negative;
}

void test() {
    int tab[] = { 1, -1, 2, 4, -5,};
    int size = sizeof(tab) / sizeof(int);
    cout << check(tab, size) << endl;

    int tab2[] = { 1, 2, 3, 4, 5 };
    int size2 = sizeof(tab2) / sizeof(int);
    cout << check(tab2, size2) << endl;  

    int tab3[] = { -1, -2, -3, -4, -5 };
    int size3 = sizeof(tab3) / sizeof(int);
    cout << check(tab3, size3) << endl;  

    int tab4[] = { -5, -3, -2, 0, 1 };
    int size4 = sizeof(tab4) / sizeof(int);
    cout << check(tab4, size4) << endl;  

}

int main() {
    test();
}