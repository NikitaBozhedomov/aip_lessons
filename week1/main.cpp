#include <iostream>
#include <math.h>

using namespace std;

int main()
{

	setlocale(0, "");

	int a, b;

	//1. ������� �� ����� ������ ����� ����� �� �������� "*" (���������)	

	cout << "*    *\n"
		    "*    *\n"
		    "******\n"
		    "*    *\n"
		    "*    *\n";

	//2. ������������ ������ ��������� ������.����� �������� � ������� ����� :
	//d.������������� �����������

	cout << "������� ����� 1: ";
	cin >> a;

	cout << "������� ����� 2: ";
	cin >> b;

	cout << "�������� �����: " << sqrt((a * a) + (b * b)) + a + b << "\n������� �����: " << (a * b) / 2;

}