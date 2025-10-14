#include <iostream>
using namespace std;

int main() {
  int a,b;

  cout << "Hello there! Today, we'll be swapping two numbers.\n\n";

  cout << "Please input the first number: ";
  cin >> a;

  cout << "Please input the second number: ";
  cin >> b;

  cout << "\nBefore swapping, the first number was " << a << " and the second was " << b << ".\n";

  // The magic: Swapping
  const int temp = a;
  a = b;
  b = temp;

  cout << "After swapping, the first is " << a << " and the second is " << b << ".\n";
  cout << "\nMagic, isn't it?\n";
  cout << "Thank you for your time and patronage 😁\n";
}
