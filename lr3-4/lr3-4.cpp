#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, sum = 0;

    cout << "Введіть натуральне число: ";
    cin >> n;

    if (n <= 0) {
        cout << "Число має бути натуральним (більше 0)!" << endl;
        return 1;
    }

    // Використовуємо цикл for
    for (int temp = n; temp > 0; temp /= 10) {
        sum += temp % 10;
    }

    cout << "Сума цифр числа " << n << " дорівнює: " << sum << endl;

    return 0;
}