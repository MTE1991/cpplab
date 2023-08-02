#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor invoked.\n";
    }
    ~MyClass() {
        cout << "Destructor invoked.\n";
    }
};

int main() {
    MyClass ob1, ob2;
    return 0;
}

