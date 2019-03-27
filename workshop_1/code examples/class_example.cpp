#include <iostream>

using namespace std;

class Animal {
public:
    Animal(string str, string snd) : name(str), sound(snd) {}

    void make_sound() {
        cout << sound << endl;
    }

    string get_name() {
        return name;
    }
private:
    string name;
    string sound;
};

int main() {
    Animal doggo("Ector", "woof");
    doggo.make_sound();
    return 0;
}