// Lab_03_1.cpp
// < Шестопалов Дмитро >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 20
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "x = "; cin >> x;
	// спосіб 1: розгалуження в скороченій формі
	if (x <= -5) {
		y = tan(x) + 1 - exp(x / (1 - x));
		cout << "1) y = " << y << endl;
	}
	if (-5 < x && x <= 3) {
		y = tan(x) + 1 - 3.2 + log10(1.8 * pow(x, 2));
		cout << "1) y = " << y << endl;
	}
	if (x > 3) {
		y = tan(x) + 1 - abs(x) * sqrt(x);
		cout << "1) y = " << y << endl;
	}
	// спосіб 2: розгалуження в повній формі
	if (x <= -5) {
		y = tan(x) + 1 - exp(x / (1 - x));
		cout << "2) y = " << y << endl;
	}
	else if (-5 < x && x <= 3) {
		y = tan(x) + 1 - 3.2 + log10(1.8 * pow(x, 2));
		cout << "2) y = " << y << endl;
	}
	else {
		y = tan(x) + 1 - abs(x) * sqrt(x);
		cout << "2) y = " << y << endl;
	}
	cin.get();
	return 0;
}