#include <iostream>
#include <Windows.h>
#include"ModulesChubenko.h"

using namespace std;

int main()
{
     SetConsoleCP(1251);
     SetConsoleOutputCP(1251);
    cout << "TC_01: ";
    s_calculation(5, 3, 10);
    cout << "TC_02: ";
    s_calculation(28, 22, 76);
    cout << "TC_03: ";
    s_calculation(8, 2, 16);
    cout << "TC_04: ";
    s_calculation(3, 2, 50);
    cout << "TC_05: ";
    s_calculation(6, 3, 20);
    cout << "TC_06: ";
    s_calculation(9, 5, 22);
    cout << "TC_07: ";
    s_calculation(11, 7, 28);
    cout << "TC_08: ";
    s_calculation(12, 4, 30);
    cout << "TC_09: ";
    s_calculation(1, 1, 1);
    cout << "TC_10: ";
    s_calculation(14, 9, 40);




    return 0;
}
