#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

int main() {
  ifstream infile("data.txt");

  if (!infile) {
    cout << "Cannot open file!\n";
    return 1; 
  }

  // New learning: std::numeric_limits
  int max = numeric_limits<int>::min();
  int min = numeric_limits<int>::max();

  int number;

  // Take not of this - note the differences between this and the getline() technique which was used to read strings. Here we intend to read numbers.

  while (infile >> number) {
    if (number > max) max = number;
    if (number < min) min = number;
  }

  cout << "Max number: " << max << endl;
  cout << "Min number: " << min << endl;

  return 0;
}
