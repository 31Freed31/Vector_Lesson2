#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Input vector size: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Input numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int x;
    cout << "Input number to delete: ";
    cin >> x;

    int i = 0;
    while (i < vec.size()) {
        if (vec[i] == x) {
            for (int j = i; j < vec.size() - 1; j++) {
                vec[j] = vec[j + 1];
            }
            vec.pop_back();
        }
        else {
            i++;
        }
    }

    cout << "Result: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}