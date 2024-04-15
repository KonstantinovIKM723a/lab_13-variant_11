#include <iostream>;
#include "windows.h";
using namespace std;

float getMember(int n, int Nmax = 0) {
    if (n < 1 || (n > Nmax && Nmax != 0)) {
        return -1;
    }
    else if (n == 1) {
        return 3;
    }
    else return getMember(n - 1, Nmax) + 0.3;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int Nmax = round((6 - 3) / 0.3) + 1;

    unsigned int n;
    cout << "Введіть індекс елемента: ";
    cin >> n;

    float a = getMember(n);
    if (a == -1) {
        cout << "Елемента з таким індексом нема ";
    }
    else {
        cout << n << "-й член ряду дорівнює " << a;
        if (n > Nmax) {
            cout << endl << "Це виходить за верхню межу диапазону (" << Nmax << "-й елемент, що дорівнює " << getMember(Nmax) << ")";
        }
    }
    cout << endl;
}
