#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale.h>

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
    cout << "Результат обчислень невизначений або недійсний." << endl;
    }

}
