#include <iostream>
#include <windows.h>
#include"ModulesChubenko.h"
using namespace std;

void testThirdTask(int test_case,int N, unsigned int expected) {
    cout << "Тест-кейс №" << test_case << endl;
    cout << "Вхідні дані:\nN: " << N << endl;

    unsigned int result = countOnesAndZeros(N);
    cout << "Результат: " << result << endl;

    if (result == expected) {
        cout << "Статус тест-кейса: passed" << endl;
    } else {
        cout << "Статус тест-кейса: failed" << endl;
    }

    cout << endl;
}

int main()
{
    testThirdTask(1,245, 2);

   system("chcp 65001 & cls");

        cout << "\n\n9.1\n" << endl;
                  calculateSalary(34);
                cout<<"______________________________\n";
               calculateSalary(43);
                 cout<<"______________________________\n";
                calculateSalary(54);
                 cout<<"______________________________\n";
                calculateSalary(31);
                 cout<<"______________________________\n";
                calculateSalary(21);
                 cout<<"______________________________\n";
                calculateSalary(11);
                 cout<<"______________________________\n";
                calculateSalary(23);
                 cout<<"______________________________\n";
                calculateSalary(43);
                 cout<<"______________________________\n";
                calculateSalary(57);
                 cout<<"______________________________\n";
                calculateSalary(12);
                 cout<<"______________________________\n";


         cout << "\n\n9.2\n" << endl;

                cout << convertSockSize(23) <<endl;
                cout<<"______________________________\n";
                cout << convertSockSize(24) << endl;
                cout<<"______________________________\n";
                cout << convertSockSize(25) << endl;
                cout<<"______________________________\n";
                cout << convertSockSize(26) << endl;
                cout<<"______________________________\n";
                cout << convertSockSize(27) << endl;
                cout<<"______________________________\n";
                cout << convertSockSize(28) << endl;
                cout<<"______________________________\n";
                cout << convertSockSize(29) << endl;
                cout<<"______________________________\n";
                cout << convertSockSize(30) << endl;
                cout<<"______________________________\n";
                cout << convertSockSize(31) << endl;
                cout<<"______________________________\n";
                cout << convertSockSize(32) << endl;
                cout<<"______________________________\n";


        cout << "\n\n9.3\n" << endl;
                cout<<"______________________________\n";
                testThirdTask(1, 5, 2);
                cout<<"______________________________\n";
                testThirdTask(2, 36, 2);
                cout<<"______________________________\n";
                testThirdTask(3, 62, 5);
                cout<<"______________________________\n";
                testThirdTask(4, 68, 2);
                cout<<"______________________________\n";
                testThirdTask(5, 76, 3);
                cout<<"______________________________\n";
                testThirdTask(6, 83, 4);
                cout<<"______________________________\n";
                testThirdTask(7, 91, 5);
                cout<<"______________________________\n";
                testThirdTask(8, 0, 32);
                cout<<"______________________________\n";
                testThirdTask(9, 111, 6);
                cout<<"______________________________\n";
                testThirdTask(10,13, 3);
                cout<<"______________________________\n";
}
