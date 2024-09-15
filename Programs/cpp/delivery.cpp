#include <iostream>
#include <vector>
  
int main() {
  
  std::vector<double> delivery_order;
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
  delivery_order.push_back(11.99);
  delivery_order.push_back(14.99);
  delivery_order.push_back(2.99);

  
  // Calculate the total using a for loop:
  
  double total = 0.0;
  
  for(int i=0;i<delivery_order.size()-1;i++) {
    total=delivery_order[i]+total;
    std::cout << "Price after item " << i+1 << ":       $"<< total << "\n";
  }   
  total = total+delivery_order[delivery_order.size()-1];
  std::cout << "Grand total after item "<<delivery_order.size()<<": $" << total << "\n";
  
}