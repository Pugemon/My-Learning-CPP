#include <Windows.h>
#include "std_lib_facilities.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); //����������� �������, � ����� �� ����� ���������
	cout << "����������, ������� ��� ��� � ��������\n";
	string first;
	string second;
	cin >> first >> second;
	cout << "������, " << first << ' ' << second << '\n';
	cout << "������� ��� ���?\n";
	double age_year;
	cin >> age_year;
	double age_month = age_year * 12;
	cout << "���, " << age_year << " ���, ��� " << age_month << " �������. \n";

}
