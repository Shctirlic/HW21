#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "������� ��� ����� : ";
	cin >> x >> y;

	int* px = &x;
	int* py = &y;

	int res = (*px + *py) / 2;

	cout << "��. ����� . = " << res << "\n";






	return 0;
}
