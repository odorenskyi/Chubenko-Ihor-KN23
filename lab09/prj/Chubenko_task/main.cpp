#include <iostream>
#include <conio.h>
#include "ModulesChubenko.h"
#include <Windows.h>
using namespace std;

int main() {
     system("chcp 65001 & cls");

    char function_choice;

    do {
            printCopyright();
        cout << "Оберіть функцію, що бажаєте виконати (\"v\", \"n\", \"m\", \"q\"): ";
        cin >> function_choice;
        cout << endl;

        switch (function_choice) {
            case 'v': {
                int x;
                cout << "x: ";
                cin >> x;

                int y;
                cout << "y: ";
                cin >> y;

                int z;
                cout << "z: ";
                cin >> z;

                cout << "Результат функції s_calculation(): ";
                s_calculation(x, y, z);
                break;
            }
            case 'n': {
                int day;
                cout << "day: ";
                cin >> day;

                cout << "Результат функції 9.1: ";
                calculateSalary(day);
                break;
            }
            case 'm': {
                int rozm;
                cout << "rozm: ";
                cin >> rozm;

                cout << "Розмір носка: " << convertSockSize(rozm);
                break;
            }
            case 'q': {
                int N;
                cout << "N: ";
                cin >> N;

                cout << "Результат функції 9.3: " << countOnesAndZeros(N)<<endl;
                break;
            }
            default: {
                cout << "Вибрана функція не підтримується." << endl;
                break;
            }
        }
                cout << "\n";
                        cout << "\nНатисніть \"w\" або \"W\" або \"p\" для завершення  виконання програми інакше для повтору виконання програми";
                function_choice = getch();
    } while (function_choice != 'w' && function_choice != 'W' && function_choice != 'p');

    return 0;
}
