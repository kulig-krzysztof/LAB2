#include <iostream>
#include <algorithm>
using namespace std;

void zmiana(int* x, int* y) {
    if (*y > * x) {
        std::swap(*x, *y);
    }
}

int main() {
    int x, y;
    cout << "Podaj x:";
    cin >> x;
    cout << "Podaj y:";
    cin >> y;
    cout << "\nx:" << x << "\ty:" << y ;
    zmiana(&x, &y);
    cout << "\nx:" << x << "\ty:" << y ;
    return 0;
}
