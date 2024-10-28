#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    double z1, z2, b, a, pi = 3.1415926;
    std::cout << "Введите a \n";
    std::cin >> a;
    std::cout << "Введите b \n";
    std::cin >> b;
    z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
    z2 = 2 * sqrt(2) * cos(a) * sin(((pi * 0.25) + 2 * a));
    std::cout << " z1 = " << z1 << " ; z2 = " << z2;
    return 0;
}

