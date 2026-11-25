// Задание 3. Стоимость доставки.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double cost, mass;

    cout << "Введите стоимость заказа: ";
    cin >> cost;

    cout << "Введите массу заказа (кг): ";
    cin >> mass;

    if (cost < 0 || mass < 0) {
        cout << "Ошибка: стоимость и масса не могут быть отрицательными." << endl;
        return 1;
    }

    double delivery;

    if (cost >= 100) {
        delivery = 0;
    }
    else {
        delivery = 10;
        if (mass > 10) {
            delivery += 8;
        }
    }

    double total = cost + delivery;

    cout << fixed << setprecision(2);
    cout << "Стоимость доставки: " << delivery << endl;
    cout << "Итоговая сумма: " << total << endl;

    return 0;
}
