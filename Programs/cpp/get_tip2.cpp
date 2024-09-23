#include <iostream>

double get_tip(double price, double tip, bool total_included) {
  bool total2;
  if (total_included) {

    return price * tip + price;

  } else {

    return price * tip;
  
  }
}
int main(){
    std::cout <<"Price= $100\n";
    std::cout <<"Tip=20%\n";
    /*bool total2;
    std::cout <<"Is tip included? Y/N: ";
    std::string total;
    std::cin >> total;
    if (total == "y"||"Y"){
        bool total2 = true;
    }
    else{
        bool total2 = false;
    }*/
    std::cout << "Total= $"<<get_tip(100, 0.2, true)<< "\n";
}
