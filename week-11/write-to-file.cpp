#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // There are three major classes in the <fstream> header file
  // ofstream => write to a file (output)
  // ifstream => Read from a file (input)
  // fstream => Both read and write to files (I/O)
  // Open (destructively) and write to a file in C++
  
  ofstream outfile("data.txt");

  if (!outfile) {
    cout << "Error opening file or something.... Oh no!!\n";
    return 1; 
  }

  outfile << "Welcome to C++ \n";
  outfile << "The file is handled successfully! \n";

  outfile.close();
  cout << "Data written to file!\n";

  return 0;
}
