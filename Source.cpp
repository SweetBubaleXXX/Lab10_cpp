// cp1251
#include <iostream>
#include <Windows.h>

using namespace std;

double computeLoop(int);

double computeRecursive(int);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введите n: \u001b[34m";
    cin >> n;
    cout << "\u001b[0m";
    if (cin.fail() || n < 0) {
        cerr << "\u001b[31mНеверный ввод!\u001b[0m" << endl;
        return 1;
    }
    cout << "Рекурсия: \u001b[42m" << computeRecursive(n) << "\u001b[0m" << endl;
    cout << "Без рекурсии: \u001b[42m" << computeLoop(n) << "\u001b[0m" << endl;

    return 0;
}

double computeLoop(int n) {
    double result = 0.5;
    for (int i = 0; i < n; i++) {
        result = 1 / (i + 1 + result);
    }
    return result;
}

double computeRecursive(int n) {
    if (n == 0) return 0.5;
    return 1 / (n + computeRecursive(n - 1));
}
