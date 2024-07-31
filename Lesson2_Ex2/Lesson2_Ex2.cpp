#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    vector<float> prices = { 2.5, 4.25, 3.0, 10.0 };

    vector<int> items = { 1, 1, 0, 3 };

    float totalCost = 0.0;

    for (int i = 0; i < items.size(); i++) {
        int index = items[i];

        if (index >= 0 && index < prices.size()) {
            totalCost += prices[index];
        }
        else {
            cout << "Ошибка: индекс " << index << " выходит за пределы допустимого диапазона цен." << endl;
        }
    }

    cout << "Суммарная стоимость: " << totalCost << endl;
}