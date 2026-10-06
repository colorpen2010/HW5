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
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = number;
            number++;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}