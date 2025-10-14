#include <iostream>

using namespace std;

int main() {
  const float PI = 3.14159;

  int radius;

  cout << "What is the radius of your circle?" << "\n";

  cin >> radius;

  const float area = radius * radius * PI;

  cout << "The area of the circle is: " << area << "\n";

  cout << "Thank you for using my wonderful program\n";
}
