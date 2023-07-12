#include <iostream>
using namespace std;

enum names {Rifah, Zuairia, Kochy, Spondon};

int main() {
    names a = Rifah;
    cout << "Rifah : " << a + 1 << endl;
    a = Spondon;
    cout << "Spondon : " << a + 1 << endl;
    a = Kochy;
    cout << "Kochy : " << a + 1 << endl;
    a = Zuairia;
    cout << "Zuairia : " << a + 1 << endl;
    return 0;
}



