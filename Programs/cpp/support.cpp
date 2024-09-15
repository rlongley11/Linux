#include <iostream>

// Change needs_it_support so that it returns support:
bool needs_it_support() {
  
  bool support;
  
  std::cout << "Hello. IT. Have you tried turning it off and on again? Enter 1 for yes, 0 for no.\n";
  std::cin >> support;
  return support; 
  
}

int main() {
  
  // Change the following line to print the function result:
if (needs_it_support()==1) {
    std::cout << "Well that's all we can do\n";
}  
else {
    std::cout << "Try that first\n";
}
}