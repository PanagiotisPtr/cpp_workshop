#include <iostream>

using namespace std;

int main() {
    int error_code;
    cin >> error_code;
    switch (error_code) {
        case 200:
            cout << "OK" << endl;
            break;
        case 404:
            cout << "NOT FOUND" << endl;
            break;
        default:
            cout << "PANIC" << endl;
            break;
    }
    return 0;
}