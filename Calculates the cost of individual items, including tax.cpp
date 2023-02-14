#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string name, item_name;
  double item_price, item_qty, tax_rate = 0.15, total_price;

  
  cout << "Enter your full name: ";
  cin>>name;

  
  cout << "Welcome, " << name << "!" << endl;

  
  cout << "Enter the name of the item: ";
  cin>>item_name;

  cout << "Enter the price of the item: $";
  cin >> item_price;

  cout << "Enter the quantity of the item: ";
  cin >> item_qty;

  
  total_price = (item_price * item_qty) * (1 + tax_rate);

  
  cout << "Grocery Bill for " << name << ":" << endl;
  cout << "Item: " << item_name << endl;
  cout << "Price per unit: $" << item_price << endl;
  cout << "Quantity: " << item_qty << endl;
  cout << "Tax: " << tax_rate * 100 << "%" << endl;
  cout << "Total price: $" << total_price << endl;

  return 0;
}
