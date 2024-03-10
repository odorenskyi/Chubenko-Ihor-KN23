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
 ------------ © All rights reserved ------------\n" << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    system("chcp 1251 > nul");

    int x;
    cout << "¬вед≥ть x: ";
    cin >> x;

    int y;
    cout << "¬вед≥ть y: ";
    cin >> y;

    int z;
    cout << "¬вед≥ть z: ";
    cin >> z;

    char a;
    cout << "¬вед≥ть a: ";
    cin >> a;

    char b;
    cout << "¬вед≥ть b: ";
    cin >> b;

    clearScreen();
    printCopyright();


    cout << "\n" << "–езультат лог≥чного виразу: " << getBoolResult(a, b) << endl;
    cout << "\nx (в дес€тков≥й): " << x << "\ny (в дес€тков≥й): " << y << "\nz (в дес€тков≥й): " << z << endl;
    cout << "\nx (в ш≥стнадц€тков≥й): " << getHexadecimal_16(x) << "\ny (в ш≥стнадц€тков≥й): " << getHexadecimal_16(y) << "\nz (в ш≥стнадц€тков≥й): " << getHexadecimal_16(z) << endl;

    s_calculation(x, y, z);

    return 0;
}
