#include <iostream>
#include <algorithm>
using namespace std;

void zmiana(int* x, int &a) {
    std::swap(*x, a);
}

int main() {
    int x, y;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "\nx: " << x << "\ty: " << y ;
    zmiana(&x, y);
    cout << "\nx: " << x << "\ty: " << y;
    return 0;
}
