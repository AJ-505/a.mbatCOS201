#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // There are three major classes in the <fstream> header file
  // ofstream => write to a file (output)
  // ifstream => Read from a file (input)
  // fstream => Both read and write to files (I/O)
  // Open (destructively) and write to a file in C++
  
  ifstream infile("data.txt");

  if (!infile) {
    cout << "Cannot open file!\n";
    return 1; 
  }

  string line;

  while (getline(infile, line)) {
    cout << line << "\n";
  }
  
  infile.close();
  cout << "File successfully read!\n";

  return 0;
}
