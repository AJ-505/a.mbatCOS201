#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter the zodiac year (0-11) and I'll give you the sign ====> ";
    int year; cin >> year;

    switch (year)
    {
    case 0:
        cout << "Monkey";
        break;
    
    case 1:
        cout << "Rooster";
        break;

    case 2:
        cout << "Dog";
        break;
    
    case 3:
        cout << "Pig";
        break;
    
    case 4:
        cout << "Rat";
        break;
    
    case 5:
        cout << "Ox";
        break;
    
    case 6:
        cout << "Tiger";
        break;
    
    case 7:
        cout << "Rabbit";
        break;
    
    case 8:
        cout << "Dragon";
        break;
    
    case 9:
        cout << "Snake";
        break;
    
    case 10:
        cout << "Horse";
        break;
    
    case 11:
        cout << "Sheep";
        break;
    
    default:
        cout << "Hey! Please enter a number from 0 to 11.";
    
    cout << "\nThank you so much for using my lovely program!";
    }
}