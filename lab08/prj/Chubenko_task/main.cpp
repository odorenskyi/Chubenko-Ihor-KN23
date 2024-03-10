#include <iostream>
#include "ModulesChubenko.h"
#include <Windows.h>
using namespace std;

bool getBoolResult(char a, char b)
{
    return (a + 1 >= b + 2);
}

int getHexadecimal_16(int number)
{
    cout << hex;
    return number;
}

void clearScreen() {
    system("cls");
}

void printCopyright()
{
    cout << " -----------------------------------------------\n\
| Chubenko Ihor, CNTU, https://github.com/IgorChubenkoKN-23 |\n\
| Chubenko Ihor, CNTU, https://github.com/IgorChubenkoKN-23  |\n\
 ------------ � All rights reserved ------------\n" << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    system("chcp 1251 > nul");

    int x;
    cout << "������ x: ";
    cin >> x;

    int y;
    cout << "������ y: ";
    cin >> y;

    int z;
    cout << "������ z: ";
    cin >> z;

    char a;
    cout << "������ a: ";
    cin >> a;

    char b;
    cout << "������ b: ";
    cin >> b;

    clearScreen();
    printCopyright();


    cout << "\n" << "��������� �������� ������: " << getBoolResult(a, b) << endl;
    cout << "\nx (� ���������): " << x << "\ny (� ���������): " << y << "\nz (� ���������): " << z << endl;
    cout << "\nx (� ��������������): " << getHexadecimal_16(x) << "\ny (� ��������������): " << getHexadecimal_16(y) << "\nz (� ��������������): " << getHexadecimal_16(z) << endl;

    s_calculation(x, y, z);

    return 0;
}
