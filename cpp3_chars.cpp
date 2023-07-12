#include <iostream>
using namespace std;

int main() {
    char c1, c2;
    cout << "Enter 2 chars c1 and c2: ";
    cin >> c1 >> c2;
    cout << "The ASCII values of c1 and c2: " << int(c1) << " " << int(c2) << endl;
    cout << "c1 + c2 = " << int(c1) + int(c2) << endl;
    cout << "c1 - c2 = " << int(c1) - int(c2) << endl;
    cout << "c1 x c2 = " << int(c1) * int(c2) << endl;
    cout << "c1 MOD c2 = " << int(c1) % int(c2) << endl;
    return 0;
}



