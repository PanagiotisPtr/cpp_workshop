#include <unordered_map>

using namespace std;

void add_someone(unordered_map<string, string>& m) {
    string name, number;
    cout << "What's the person's name?\n";
    cin >> name;
    cout << "What's their phone number?\n";
    cin >> number;
    m[name] = number;
}

void remove_someone(unordered_map<string, string>& m) {
    string name, number;
    cout << "What's the person's name?\n";
    cin >> name;
    if(m.find(name) == m.end())
        cout << "This person is not in the phone book\n";
    else
        m.erase(m.find(name));
}

int main() {
    unordered_map<string, string> phone_book;
    phone_book["Jeff"] = "07531231414";
    phone_book["James"] = "07534623185";
    phone_book["Susan"] = "07585109815";
    phone_book["Natasha"] = "07123591501"; 
    
    while(true) {
        cout << "Phone Book" << endl;
        for(auto p : phone_book)
            cout << p.first << " : " << p.second << endl;
        cout << "type 'add' to add someone 'remove' to remove or anything else to exit\n";
        string tmp; cin >> tmp;
        if(tmp == "add")
            add_someone(phone_book);
        else if(tmp == "remove")
            remove_someone(phone_book);
        else
            break;
    }

    return 0;
}