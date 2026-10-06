#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a[3][4];
    int number;
    cout << "Введіть число: ";
    cin >> number;
    a[0][0] = number;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (i != 0 || j != 0) {
                a[i][j] = number * 2;
                number = a[i][j];
            }
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}