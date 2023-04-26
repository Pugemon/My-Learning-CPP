#include "std_lib_facilities.h"

int main()
{
    setlocale(LC_CTYPE, "rus");
    cout << "Пожалуйста, введите значение с плавающей точкой: ";
    double n;
    cin >> n;
    cout << "n == " << n
        << "\nn+1 == " << n + 1
        << "\nтри раза по n == " << 3 * n
        << "\nдва раза по n == " << n + n
        << "\nn в квадрате == " << n * n
        << "\nполовина n == " << n / 2
        << "\nкорень квадратный из n == " << sqrt(n)
        << '\n';
}
