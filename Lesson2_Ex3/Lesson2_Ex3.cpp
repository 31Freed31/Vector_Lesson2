#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    const int MAX_SIZE = 20;
    vector<int> db(MAX_SIZE);
    int input;
    int count = 0;
    int index = 0;

    while (true) {
        cout << "Введите число (-1 для вывода содержимого хранилища): ";
        cin >> input;

        if (input == -1) {
            cout << "Содержимое хранилища: ";
            if (count < MAX_SIZE) {
                for (int i = 0; i < count; ++i) {
                    cout << db[i] << " ";
                }
            }
            else {
                for (int i = index; i < MAX_SIZE; ++i) {
                    cout << db[i] << " ";
                }
                for (int i = 0; i < index; ++i) {
                    cout << db[i] << " ";
                }
            }
            cout << endl;
        }
        else {
            db[index] = input;
            index = (index + 1) % MAX_SIZE;
            ++count;
        }
    }
}