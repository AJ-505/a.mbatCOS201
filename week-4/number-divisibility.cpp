#include <iostream>

using namespace std;

int main() {
    cout << "Hello user! Please input a number: ";
    int num; cin >> num;

    if (num % 2 == 0) {
        cout << "Your number is even";
    } else {
        cout << "Your number is odd";
    }
}