
// Lab_02.cpp
// Панасюк Софія
// Лабораторна робота No 2.
// Лінійні програми.
// Варіант 18

#include <iostream>
#include <cmath>   // для sqrt()

using namespace std;

int main() {
    double a;   // вхідний параметр
    double z1;  // результат першого виразу
   // double z2;  // результат другого виразу

    cout << "a = ";
    cin >> a;

    // Обчислення
    z1 = (((a + 2) / sqrt(2 * a)) - (a / (sqrt(2 * a) + 2)) + (2 / (a - sqrt(2 * a)))) * ((sqrt(a) - sqrt(2)) / (a + 2));
    //z2 = 1 / (sqrt(a) + sqrt(2));

    // Вивід
    cout << endl;
    cout << "z1 = " << z1 << endl;
    //cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}