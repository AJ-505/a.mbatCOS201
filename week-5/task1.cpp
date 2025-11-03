#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    bool isPauStudent;

    cout << "Hello there! Please enter your full name =====> ";
    getline(cin, name);

    cout << "Are you a PAU student? Please say the truth (1 for true, 0 for false) ====> ";
    cin >> isPauStudent;

    cout << "Enter course (1-5): \n 1 -- Photography\n 2 -- Painting\n 3 -- Fish Farming \n 4 -- Baking \n 5 -- Public speaking\n =====> ";
    string course; cin >> course;

    cout << course;
    cout << "Chai" << endl;

    cout << "Enter location (1-5): \n 1 -- \n 2 -- Painting\n 3 -- Fish Farming \n 4 -- Baking \n 5 -- Public speaking\n =====> ";

    string courseName;

    return 0;
}