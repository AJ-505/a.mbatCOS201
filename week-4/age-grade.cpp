#include <iostream>

using namespace std;

int main() {
    cout << "Hello user! Please input your age: ";
    int num; cin >> num;

    if (num >= 18) {
        cout << "You're an adult.";
    } else {
        cout << "You're NOT an adult.";
    }
}