#include <iostream>
#include <math.h>

int tenth_power(int num){
    num = pow(num,10);
    std::cout << num << "\n";
    return num;
}

int main (){
    tenth_power(0);
    tenth_power(1);
    tenth_power(2);
}