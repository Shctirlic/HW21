#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "Введите два числа : ";
	cin >> x >> y;

	int* px = &x;
	int* py = &y;

	int res = (*px + *py) / 2;

	cout << "Ср. арифм . = " << res << "\n";






	return 0;
}
