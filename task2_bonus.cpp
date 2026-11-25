// Задание 2. Премия к зарплате.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salary, percent;

    cout << "Введите зарплату: ";
    cin >> salary;

    cout << "Введите процент премии: ";
    cin >> percent;

    if (salary < 0 || percent < 0) {
        cout << "Ошибка: зарплата и процент премии не могут быть отрицательными." << endl;
        return 1;
    }

    double bonus = salary * percent / 100.0;
    double total = salary + bonus;

    cout << fixed << setprecision(2);
    cout << "Премия: " << bonus << endl;
    cout << "Итоговая зарплата: " << total << endl;

    return 0;
}
