#include <iostream>

using namespace std;

int main() {
    int a = 10;
    while(a--) {
        if (a%2)
            cout << "Odd: " << a << endl;
        else
            cout << "Even: " << a << endl;
    }
    return 0;
}