#include <iostream>

using namespace std;

int main() {
  int a,b;

  cout << "Hello there, let's do some arithmetic!\n";
  cout << "We'll be calculating the sum, product and difference of two integers. \n\n";

  cout << "Please input the first number: ";
  cin >> a;

  cout << "Please input the second number: ";
  cin >> b;

  cout << "\n";
  cout << "The sum of the two numbers is " << a+b << "." << "\n";
  cout << "The result of subtracting the second number from the first is " << a-b << "." << "\n" ;
  cout << "The product of the two numbers is " << a*b << "." << "\n" ;

  cout << "Thank you for your time and patronage 😁\n";
}
