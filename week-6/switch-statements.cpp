#include <iostream>

using namespace std;

int main() {
   int x;
   
   cout << "Input a number (which represents a day of the week — 1 for Monday, 2 for Tuesday etc): ";
   cin >> x;

   // Switch statements — "fall through behaviour"
   // Individual cases for switch statements will "fall through" without the break — so you can get away with something like this
   switch (x) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Whoohoo! It's indeed a weekday — aren't you excited? 😁😁";
        break;
    case 6:
    case 7:
        cout << "Yessss! It's the weekend — another round of PL matches! 😁😁";
   }
}