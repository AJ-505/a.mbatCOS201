#include <iostream>
using namespace std;

int main() {
  float purchase_amount;
  const float tax_rate = 0.06;

  cout << "Hello! Nice goods you've got there.\nLet's see how much your duties to the government (sales tax) amounts to.\nPlease how much is the total purchase amount for your order? ";

  cin >> purchase_amount;
  const float sales_tax = tax_rate * purchase_amount;

  cout << "\nNice! Your sales tax (rate: 6%) is ₦" << sales_tax << "\n";

  cout << "Thank you for your time, and for being a good citizen! \n";

  return 0;

}
