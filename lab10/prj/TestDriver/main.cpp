#include <iostream>
#include<Windows.h>
#include"ModulesChubenko.h"
#include <fstream>
#include <string>
#include <set>
#include <sstream>
#include <chrono>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <set>
#include <conio.h>

using namespace std;
struct TestCase {
    int test_case; // Номер тест-кейса
    int x;
    int y;
    int z;
    int b;
    string outputFileName;
};
    string dictPath = "slovnik.txt";
    string filePath = "slova.txt";
    string outputPath = "output.txt";
    string alphabetPath = "alphabet.txt";
#define TEST_CASES_COUNT 5
void testFirstTask(int test_case, string inputFileName, string outputFileName) {
    cout << "Тест-кейс №" << test_case << endl;
    cout << "Вхідні дані:\ninputFileName: " << inputFileName << "\noutputFileName: " << outputFileName << endl;

    taskOneTen(dictPath, filePath, outputPath, alphabetPath);
    cout << "Відкрийте модифікований файл та порівняйте з текстом із поля Expected Result. Співпадає? (y/n): ";
    char checkResult = _getch();

    if (checkResult == 'y' || checkResult == 'Y') {
        cout << endl << "Статус тест-кейса: passed" << endl;
    }
    else {
        cout << endl << "Статус тест-кейса: failed" << endl;
    }

    cout << endl;
}
void taskTwoTen(int test_case, string inputFileName) {
    cout << "Тест-кейс №" << test_case << endl;
    cout << "Вхідні дані:\ninputFileName: " << inputFileName << endl;

    taskTwoTen(filePath,  outputPath);
    cout << "Відкрийте модифікований файл та порівняйте з текстом із поля Expected Result. Співпадає? (y/n): ";
    char checkResult = _getch();

    if (checkResult == 'y' || checkResult == 'Y') {
        cout << endl << "Статус тест-кейса: passed" << endl;
    }
    else {
        cout << endl << "Статус тест-кейса: failed" << endl;
    }

    cout << endl;
}
void testThirdTask(int test_case, int x, int y, int z, unsigned int b, string outputFileName) {
    cout << "Тест-кейс №" << test_case << endl;
    cout << "Вхідні дані: " << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
    cout << "b: " << b << endl;
    cout << "outputFileName: " << outputFileName << endl;

    taskTenthPointThree(x, y, z, b, outputFileName);
    cout << "Відкрийте модифікований файл та порівняйте з текстом із поля Expected Result. Співпадає? (y/n): ";
    char checkResult = _getch();

    if (checkResult == 'y' || checkResult == 'Y') {
        cout << endl << "Статус тест-кейса: passed" << endl;
    }
    else {
        cout << endl << "Статус тест-кейса: failed" << endl;
    }

    cout << endl;
}

int main() {

    #define TEST_CASES_COUNT 5
system("chcp 65001 & cls");
// Визначення вхідних даних для завдань
string dictPath = "slovnik.txt";
string filePath = "slova.txt";
string outputPath = "output.txt";
string alphabetPath = "alphabet.txt";

taskOneTen(dictPath, filePath, outputPath, alphabetPath);


taskTwoTen(filePath, outputPath);

// Виклик тестової функції для завдання 10.1
cout << "=== Тести завдання 10.1 ===" << endl;
testFirstTask(1, dictPath, outputPath);
testFirstTask(2, dictPath, outputPath);
testFirstTask(3, dictPath, outputPath);
testFirstTask(4, dictPath, outputPath);
testFirstTask(5, dictPath, outputPath);
// Виклик тестової функції для завдання 10.2
cout << "=== Тести завдання 10.2 ===" << endl;
taskTwoTen(1, filePath);
taskTwoTen(2, filePath);
taskTwoTen(3, filePath);
taskTwoTen(4, filePath);
taskTwoTen(5, filePath);


// Визначення тестових випадків для завдання 10.3
const TestCase testCases[TEST_CASES_COUNT] = {
    {1, 5, 3, 10, 5676, "output.txt"},
    {2, 28,22, 76, 4000, "output.txt"},
    {3, 11, 7, 28, 345, "output.txt"},
    {4, 14, 9, 40,876, "output.txt"},
    {5, 12, 4, 30,543, "output.txt"}
};

// Виклик тестової функції для завдання 10.3
cout << "=== Тести завдання 10.3 ===" << endl;
for (int i = 0; i < TEST_CASES_COUNT; i++) {
    const auto& testCase = testCases[i];
    testThirdTask(testCase.test_case, testCase.x, testCase.y, testCase.z, testCase.b, testCase.outputFileName);
}

return 0; // Повернення 0 для вказання успішного завершення програми

}
