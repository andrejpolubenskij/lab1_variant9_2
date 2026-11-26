#include <iostream>
using namespace std;

int main() {
    double salary, percent;

    cout << "Введите зарплату: ";
    cin >> salary;

    cout << "Введите процент премии: ";
    cin >> percent;

    if (salary < 0 || percent < 0) {
        cout << "Ошибка: неверные данные" << endl;
        return 1;
    }

    double bonus = salary * percent / 100;

    cout << "Премия: " << bonus << endl;
    cout << "Итоговая зарплата: " << salary + bonus << endl;

    return 0;
}
