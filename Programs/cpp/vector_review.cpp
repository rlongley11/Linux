#include <iostream>
#include <vector>
  
int main() {
    
std::vector<int> number = {2, 4, 3, 6, 1, 9};
int sum=0;
int prod=1;
number.push_back(10);

std::cout << "Vector { ";
for (int i=0;i<number.size();i++) { 
if (number[i]%2==0) {               
    sum=sum+number[i];
}
else if (number[i]%2!=0) {
    prod=prod*number[i];
    }
std::cout << number[i] << " ";
}
std::cout <<"}\n"<< sum << "\n";
std::cout << prod << "\n";
}