#include <Windows.h>
#include "std_lib_facilities.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); //Русификация консоли, к книге не имеет отношения
	cout << "Пожалуйста, введите своё имя и отчество\n";
	string first;
	string second;
	cin >> first >> second;
	cout << "Привет, " << first << ' ' << second << '\n';
	cout << "Сколько вам лет?\n";
	double age_year;
	cin >> age_year;
	double age_month = age_year * 12;
	cout << "Вам, " << age_year << " лет, или " << age_month << " месяцев. \n";

}
