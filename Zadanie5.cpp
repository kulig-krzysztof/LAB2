#include <iostream>
#include <algorithm>
using namespace std;

void zmiana(int &x, int &y) {
    std::swap(x, y);
}

int main() {
    int x, y;
    cout << "x: ";
    while (!(cin >> x)) {
        cout << "blad, wpisz cyfre";
        cin.clear();
        cin.ignore();
    }
    cout << "y: ";
    while (!(cin >> y)) {
        cout << "blad, wpisz cyfre";
        cin.clear();
        cin.ignore();
    }
    cout << "\nLiczba x:" << x << "\tLiczba y:" << y;
    zmiana(x, y);
    cout << "\nLiczba x:" << x << "\tLiczba y:" << y;  
    return 0;
}
