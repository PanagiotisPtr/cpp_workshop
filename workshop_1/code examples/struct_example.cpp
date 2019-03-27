#include <iostream>

using namespace std;

struct vec3 {
    double x, y, z;
    
    vec3(double a, double b, double c) : x(a), y(b), z(c) {}

    double sum() { return x + y + z; }
};

int main() {
    vec3 my_vec(1, 2, 3);
    // \t -> this is a tab character
    // characters have single quotes
    cout << my_vec.x << '\t' << my_vec.y << '\t' << my_vec.z << endl;
    cout << my_vec.sum() << endl;
    return 0;
}