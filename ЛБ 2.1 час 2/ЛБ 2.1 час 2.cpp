// Lab_02.cpp
// < Романишин Емілія >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 0.21
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // число пі
	double x; // вхідний параметр
	double alpha;// вхідний параметр
	double z1; // результат обчислення 1-го виразу
	//double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	cout << "alpha = "; cin >> alpha;
	z1 = 2 * sin(x)*sin(3 * Pi - 2 * alpha) * cos(x) * cos(5 * Pi + 2 * alpha);
	//z2 = 1.0 / 4.0 - 1.0 / 4.0 * sin(5.0 / 2 * Pi - 8 * alpha);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
