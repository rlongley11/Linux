#include <iostream>

int main() {
  
  int year =0;

  std::cout << "Type in a year: ";
  std::cin >> year;
  std::cout <<"remainder /4: "<< year % 4 <<"\n"; 
  std::cout <<"remainder /100: " <<year % 100 <<"\n";
  std::cout <<"remainder /400: " <<year % 400 <<"\n";

  if (year < 1000 || year > 9999) {
    std::cout << "invalid entry\n";
  }
  else if (year % 4 ==0 && year % 100 !=0 || year % 400 ==0){ 
    std::cout << "election year\n";
  }
  else {
    std::cout << "not an election year\n";
  }
  
}