#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a[3][6];
    int b[3][6];
    int shifts;
    int direction;
    srand(time(0));
    cout << "Початковий масив:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            a[i][j] = rand() % 10;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Кількість зсувів: ";
    cin >> shifts;
    cout << "Оберіть напрямок:" << endl;
    cout << "1 - вліво" << endl;
    cout << "2 - вправо" << endl;
    cout << "3 - вгору" << endl;
    cout << "4 - вниз" << endl;
    cin >> direction;
    if (direction == 1) {
        shifts = shifts % 6;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 6; j++) {
                b[i][j] = a[i][(j + shifts) % 6];
            }
        }
    }
    if (direction == 2) {
        shifts = shifts % 6;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 6; j++) {
                b[i][j] = a[i][(j - shifts + 6) % 6];
            }
        }
    }
    if (direction == 3) {
        shifts = shifts % 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 6; j++) {
                b[i][j] = a[(i + shifts) % 3][j];
            }
        }
    }
    if (direction == 4) {
        shifts = shifts % 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 6; j++) {
                b[i][j] = a[(i - shifts + 3) % 3][j];
            }
        }
    }
    cout << endl;
    cout << "Масив після зсуву:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}