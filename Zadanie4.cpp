#include <iostream>
using namespace std;

int dzialania(int x, int y, int &mnoz) {
    mnoz = x * y;
    return x + y;
}

int main() {
    int x, y, mnoz;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << x << " + " << y << " = " << dzialania(x, y, mnoz);
    cout << "\n" << x << " * " << y << " = " << mnoz;
    return 0;
}
