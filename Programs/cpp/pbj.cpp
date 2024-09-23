#include <iostream>

std::string make_sandwich(std::string pam1,std::string pam2){
    
    std::string sandwich = "";
    sandwich += "Bread\n";
    sandwich += pam1 +"\n";
    sandwich += pam2 +"\n";
    sandwich += "Bread\n";
    return sandwich;
}


int main(){

std::cout << make_sandwich("Peanut Butter","Jelly");

}