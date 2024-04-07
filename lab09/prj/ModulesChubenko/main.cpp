#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale.h>
#include <Windows.h>
using namespace std;
void s_calculation(int x, int y, int z)
{

    setlocale(LC_ALL,"UA");
    float S;
    if (x > y && y != 0){

    S =  abs(abs(sqrt(z - 2 * x)) - x * sin(pow(x, 2 * z)) * y);
     cout << "S: " << setprecision(3) << fixed << S << endl;
    }
    else {
    cout << "��������� ��������� ������������ ��� ��������." << endl;
    }

}
void calculateSalary(int day) {
    double zar, p1, p2, p3, p4;
    double sum;

    int oplata = 450;

    std::cout << "������ ������� ������������� ���: ";
    std::cin >> day;

    zar = day * oplata;
    std::cout << "���������: " << zar << std::endl;

    p1 = 15.0 / 100 * zar;
    std::cout << "������� 15 %: " << p1 << std::endl;

    p2 = 2.0 / 100 * zar;
    std::cout << "������� 2 % -: " << p2 << std::endl;

    p3 = 0.6 / 100 * zar;
    std::cout << "������� 0,6 % -: " << p3 << std::endl;

    p4 = 1.0 / 100 * zar;
    std::cout << "������� 1 %: " << p4 << std::endl;

    sum = p1 + p2 + p3 + p4;
    std::cout << "���� �� �������: " << zar - sum << std::endl;
}

string convertSockSize(int rozm) {
    if (rozm == 23 || rozm == 24) {
        return "� �� 37/38\n� ��� 8\n";
    }
    else if (rozm == 25 || rozm == 26) {
        return "� �� 39/40\n� ��� 9\n";
    }
    else if (rozm == 27 || rozm == 28) {
        return "� �� 41/42\n� ��� 10\n";
    }
    else if (rozm == 29 || rozm == 30) {
        return "� �� 43/44\n� ��� 11\n";
    }
    else if (rozm == 31) {
        return "� �� 45/46\n� ��� 12\n";
    }
    else {
        return "����� �� ������� ������� �������.\n";
    }
}
int countBits(int N) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int zero_count = 0, one_count = 0;
    for (int i = 0; i < 32; ++i) {
        if (N & (1 << i)) {
            ++one_count;
        }
        else {
            ++zero_count;
        }
    }
    cout << "���������: ";
    return (N == 0) ? zero_count : one_count;
}
