#include <iostream>
double average(double num1, double num2){
    double average = (num1+num2)/2;
    std::cout << average<<"\n";
    return average;
}

int main(){

average(42,24);
average(1,2);

}