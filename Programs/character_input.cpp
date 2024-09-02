#include <iostream>
int main () {

double price = 0;
double tip=0;
double total=0;

std::cout << "Enter amount: $";
std::cin >> price;
tip=price*0.0825;
total=price+tip;
std::cout << "Your total is $"<< total << ".\nThis includes a $" << tip << " tip\n";

}
