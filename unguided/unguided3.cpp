#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        // Bagian kiri
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Tanda *
        cout << "* ";

        // Bagian kanan
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // Baris terakhir hanya bintang
    cout << "*" << endl;

    return 0;
}
