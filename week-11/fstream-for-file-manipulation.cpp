#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // ios::out => write mode
  // ios::in => read mode
  // ios::app => append mode (add more stuff to the file)
  // ios::trunc => Erase a file if it exists
  
  fstream file("data.txt", ios::out | ios::app); // write & append mode

  file << "Adding a nice new line to this file.\n";
  file.close();

  cout << "DONE.\n";

  return 0;
}
