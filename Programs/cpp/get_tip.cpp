#include <iostream>

double get_tip(double price){
    return price*0.2; //sets up get_tip function
}

int main(){
    double tip = get_tip(15.75); //makes tip based on get_tip function with input
    std::cout << tip << "\n";
}