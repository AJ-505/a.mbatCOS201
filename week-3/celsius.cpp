#include <iostream>

using namespace std;

int main() {
  // f = (c / 5) * 9 + 32

  cout << "enter the degree in fahrenheit: ";

  float c;
  cin >> c;

  const float f = (c / 5.0) * 9 + 32;

  cout << "the fahrenheit equivalent is: " << f << "\n";
}
