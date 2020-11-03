#include <iostream>
using namespace std;

void zmiana(int &x, int &y) {
    x = x + y;
    y = x - y;
    x = x - y;
}

int main() {
    int x, y;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "\nx:" << x << "\ty:" << y;
    zmiana(x, y);
    cout << "\nx:" << x << "\ty:" << y;
    return 0;
}
