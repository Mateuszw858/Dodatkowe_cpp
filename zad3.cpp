//Na stronie https ://gist.github.com/pjastr/4314ed3bcde8df569bb167f7d989b082 dostępny jest kod w języku C++.  
// W niektórych linijkach są komentarze. Twoim zadaniem jest wpisanie wartości odpowiednich zmiennych po wykonaniu konkretnej linii kodu. 
// Dopisanie nowych linijek i instrukcji poza komentarzami będzie powodowało niezaliczenie odpowiedzi.
//Wskazówka: operator % oznacza resztę z dzielenie pierwszej liczby przez drugą.
#include <iostream>

using namespace std;

int main()
{
	int a = 3, b = 2, c = 4, d;
	d = a++ + b - c % 3; //a=4  ,b=2  , c=4  ,d=4
	d = ++a + b - c % 3; //a=5  ,b=2  , c=4  ,d=6
	d = (b = c) + 2; //a=5  ,b=4  , c=4  ,d=6
	return 0;
}