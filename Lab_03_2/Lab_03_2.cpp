// Lab_03_2.cpp
// < �������� ��� >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 16

#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

		cout << "x = "; cin >> x;

	// ����� 1: ������������ � ��������� ����

	if (x == 0 && b != 0)
		F = a * (x + c) * (x + c) - b;

	if (x == 0 && b == 0)
		F = (x - a) / (- c);

		F = a + x/c;

	cout << endl;

	cout << "1) F = " << F << endl;

	// ����� 2: ������������ � ����� ����

	if (x == 0 && b != 0)
		F = a * (x + c) * (x + c) - b;

	else
		if (x == 0 && b == 0)
			F = (x - a) / (-c);

		else
			F = a + x / c; 

	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}
