#include <iostream>
using namespace std;

int main() {
    double cost, mass;

    cout << "Введите стоимость заказа: ";
    cin >> cost;

    cout << "Введите массу заказа: ";
    cin >> mass;

    if (cost < 0 || mass < 0) {
        cout << "Ошибка: неверные данные" << endl;
        return 1;
    }

    double delivery = 10;

    if (mass > 10) {
        delivery = delivery + 8;
    }

    if (cost >= 100) {
        delivery = 0;
    }

    cout << "Доставка: " << delivery << endl;
    cout << "Итого: " << cost + delivery << endl;

    return 0;
}
