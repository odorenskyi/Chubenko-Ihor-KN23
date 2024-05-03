#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale.h>
#include <Windows.h>
#include <fstream>
#include <ctime>
#include <bitset>
#include <fstream>
#include <string>
#include <set>
#include <sstream>
#include <chrono>
#include <iomanip> // Для форматування часу
#include <conio.h>
#include"ModulesChubenko.h"

using namespace std;

// Laboratory work №8

double s_calculation(int x, int y, int z) {
    double S;

    if (x > y && y != 0) {
        S = abs(abs(sqrt(z - 2 * x)) - x * sin(pow(x, 2 * z)) * y);
      //  cout << "S: " << setprecision(3) << fixed << S << endl;
    }
    else {
        cout << "Результат обчислень невизначений або недійсний." << endl;
        return 0.0;
    }

    // Повернення значення S
    return S;
}
// Laboratory work №9
void calculateSalary(int day) {

    double zar, p1, p2, p3, p4;
    double sum;
    int oplata = 450;

    zar = day * oplata;
    cout << "Зарплатня: " << zar << endl;

    p1 = 15.0 / 100 * zar;
    cout << "Податок 15 %: " << p1 << endl;

    p2 = 2.0 / 100 * zar;
    cout << "Податок 2 % -: " << p2 << endl;

    p3 = 0.6 / 100 * zar;
    cout << "Податок 0,6 % -: " << p3 << endl;

    p4 = 1.0 / 100 * zar;
    cout << "Податок 1 %: " << p4 << endl;

    sum = p1 + p2 + p3 + p4;
    cout << "Сума до виплати: " << zar - sum << endl;
}
void printCopyright()
{
    cout << " -----------------------------------------------\n\
| Chubenko Ihor, CNTU, https://github.com/IgorChubenkoKN-23 |\n\
| Chubenko Ihor, CNTU, https://github.com/IgorChubenkoKN-23  |\n\
 ------------ © All rights reserved ------------\n" << endl;
}
int countOnesAndZeros( int N) {
   int zero_count = 0;
    int result=0;
  int  one_count = 0;

    for (int i = 0; i < 32; ++i) {
        if (N & (1 << i)) {
            ++one_count;
        }
        else {
            ++zero_count;
        }
    }
    (N == 0) ? result=zero_count : result=one_count;
    return result;
}


string convertSockSize(int rozm) {
    if (rozm == 23 || rozm == 24) {
        return "В ЄС 37/38\nВ США 8\n";
    }
    else if (rozm == 25 || rozm == 26) {
        return "В ЄС 39/40\nВ США 9\n";
    }
    else if (rozm == 27 || rozm == 28) {
        return "В ЄС 41/42\nВ США 10\n";
    }
    else if (rozm == 29 || rozm == 30) {
        return "В ЄС 43/44\nВ США 11\n";
    }
    else if (rozm == 31) {
        return "В ЄС 45/46\nВ США 12\n";
    }
    else {
        return "Розмір не відповідає жодному варіанту.\n";
    }
}

// Laboratory work №10.1-10.2






void  taskTwoTen(const string& filePath, const string& outputPath) {
    // Запис державних символів України до вхідного файлу slova.txt
    ofstream fin_out(filePath, ios::app);  // Відкриття файлу slova.txt для запису
    fin_out << "\nПерелік державних символів України згідно зі ст. 20 Конституції України:\n";
    fin_out << " Державний прапор України\n";
    fin_out << " Державний герб України\n";
    fin_out << " Державний гімн України\n";
    fin_out.close();  // Закриття файлу після запису

    // Відкриття вхідного файлу для додавання дати та часу дозапису
    ofstream fout(filePath, ios::app);
    if (!fout) {
        cerr << "Не вдалося відкрити файл для запису" << endl;

        exit(1);
    }

    // Отримання поточного часу та форматування його у потрібний формат
    auto now = chrono::system_clock::now();
    auto nowTimeT = chrono::system_clock::to_time_t(now);
    tm localTime;

    // Використання `localtime_s` для отримання поточного часу
    localtime_s(&localTime, &nowTimeT);

    // Запис дати та часу дозапису у вихідний файл
    fout << "\nДата та час дозапису: " << put_time(&localTime, "%Y-%m-%d %H:%M:%S") << endl;


    fout.close(); // Закриття вихідного файлу
}

void  taskOneTen(const string& dictPath, const string& filePath, const string& outputPath, const string& alphabetPath) {
    // Зміна кодування консолі на 1251 (якщо потрібно)

    // Відкриття вихідного файлу для додавання інформації
    ofstream fout(outputPath, ios::app);
    if (!fout) {
        cerr << "Не вдалося відкрити файл для запису" << endl;
        exit(1);
    }

    // Додавання авторської інформації у вихідний файл
    fout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    fout << "Ім'я розробника: Чубенко Ігор\n";
    fout << "Установа/організація: Центральноукраїнський національний технічний університет\n";
    fout << "Місто, країна: Кропивницький, Україна\n";
    fout << "Рік розробки: 2024\n";
    fout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    string ukrainianAlphabet = "АБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯабвгґдеєжзиіїйклмнопрстуфхцчшщьюя";
    fout << "\nУсі літери української абетки:\n" << ukrainianAlphabet << endl;
    string alphabetLine;



    // Завантаження словника
    set<string> dictionary;
    ifstream dictFile(dictPath);
    if (!dictFile) {
        cerr << "Не вдалося відкрити файл словника" << endl;
        exit(1);
    }

    string dictWord;
    while (dictFile >> dictWord) {
        dictionary.insert(dictWord);
    }
    dictFile.close();

    // Перевірка слів у файлі та запис у вихідний файл
    ifstream fin(filePath);
    if (!fin) {
        cerr << "Файл не відкритий" << endl;
        exit(1);
    }

    cout << "Файл відкритий" << endl;

    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        string word;
        while (iss >> word) {
            if (dictionary.find(word) != dictionary.end()) {
                fout << "Слово \"" << word << "\" правильно написано.\n";
            }
            else {
                fout << "Слово \"" << word << "\" неправильно написано.\n";
            }
        }
    }
    fin.close();

    cout << "Усі дані записані у вихідний файл." << endl;


}

void taskTenthPointThree(int x, int y, int z, int b, string outputFileName) {
    // Відкриття файлу для додавання інформації
    ofstream outputFile(outputFileName, ios::out | ios::app);

    if (!outputFile) {
        cerr << "Не вдалося відкрити файл для запису" << endl;
        return;
    }

    // Виконання функції s_calculation та збереження результату у змінну
    double result = s_calculation(x, y, z);

    // Виведення результату функції s_calculation у файл
    outputFile << "Результат виконання функції s_calculation: " << result << endl;

    // Перетворення числа b у двійкове представлення за допомогою bitset<32>
    outputFile << "Число b у двійковому коді: " << bitset<32>(b).to_string() << endl << endl;

    // Закриття файлу
    outputFile.close();
}

void testThirdTask(int test_case, int x , int y, int z, int b, string outputFileName) {
    cout << "Тест-кейс №" << test_case << endl;
    cout << "Вхідні дані:\n";
    cout << "x: " << x << ", y: " << y << ", z: " << z << ", b: " << b << "\n";
    cout << "outputFileName: " << outputFileName << endl;

    // Виклик функції taskTenthPointThree з вхідними параметрами
    taskTenthPointThree(x, y, z, b, outputFileName);

    // Попросіть користувача перевірити результат і порівняти з очікуваним результатом
    cout << "Відкрийте файл '" << outputFileName << "' та порівняйте результати з очікуваними результатами." << endl;
    cout << "Співпадає? (y/n): ";

    // Замість getch використовуйте std::cin для введення користувача
    char checkResult;
    cin >> checkResult;

    // Перевірте відповідь користувача
    if (checkResult == 'y' || checkResult == 'Y') {
        cout << endl << "Статус тест-кейса: passed" << endl;
    }
    else {
        cout << endl << "Статус тест-кейса: failed" << endl;
    }

    cout << endl;
}






