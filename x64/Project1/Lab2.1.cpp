
// Lab_02.cpp
// ������� �����
// ����������� ������ No 2.
// ˳��� ��������.
// ������ 18

#include <iostream>
#include <cmath>   // ��� sqrt()

using namespace std;

int main() {
    double a;   // ������� ��������
    double z1;  // ��������� ������� ������
   // double z2;  // ��������� ������� ������

    cout << "a = ";
    cin >> a;

    // ����������
    z1 = (((a + 2) / sqrt(2 * a)) - (a / (sqrt(2 * a) + 2)) + (2 / (a - sqrt(2 * a)))) * ((sqrt(a) - sqrt(2)) / (a + 2));
    //z2 = 1 / (sqrt(a) + sqrt(2));

    // ����
    cout << endl;
    cout << "z1 = " << z1 << endl;
    //cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}