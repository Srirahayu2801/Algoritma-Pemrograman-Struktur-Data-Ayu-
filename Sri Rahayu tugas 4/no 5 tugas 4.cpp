#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, term;

    cout << "Masukkan jumlah baris untuk segitiga: ";
    cin >> n;

    cout << "Deret bilangan genap membentuk segitiga siku-siku terbalik:" << endl;

    for (int i = n; i >= 1; i--) {
        term = 2 * i;
        sum += term;
        cout << term;

        if (i > 1) {
            cout << " + ";
        } else {
            cout << " = " << sum;
        }

        for (int j = 1; j < i; j++) {
            term -= 2;
            sum += term;
            cout << " + " << term;
        }

        cout << endl;
    }

    return 0;
}
