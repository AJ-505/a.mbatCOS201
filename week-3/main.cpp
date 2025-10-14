#include <iostream>

using namespace std;

int main() {
  // f-32 / 9 = c / 5

  cout << "enter the degree in fahrenheit: ";

  int f;
  cin >> f;

  const float c = (5.0/9.f) * (f-32);

  cout << "the celsius equivalent is: " << c;
}
