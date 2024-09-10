#include <iostream>

int main() {
  
  double weighte;
  int x;
  double planetweight;
  std::cout << "What is your earth weight: (lbs)" <<"\n";
  std::cin >> weighte;
  std::cout << "What planet do you want to battle?\nMercury = 1\nVenus = 2\nEarth = 3\nMars = 4\nJupiter = 5\nSaturn = 6\nUranus = 7\nNeptune = 8\nShhhhh = 9\n";
  std::cin >> x;

switch(x) {
case 1 : 
planetweight=weighte*0.38;
std::cout << "Mercury weight = " << planetweight << " lbs\n";
break;
case 2 : 
planetweight=weighte*.91;
std::cout << "Venus weight = " << planetweight << " lbs\n";
break;
case 3 : 
std::cout << "Earth weight = " << weighte << " lbs\n";
break;
case 4 : 
planetweight=weighte*0.38;
std::cout << "Mars weight = " << planetweight << " lbs\n";
break;
case 5 : 
planetweight=weighte*2.34;
std::cout << "Jupiter weight = " << planetweight << " lbs\n";
break;
case 6 : 
planetweight=weighte*1.06;
std::cout << "Saturn weight = " << planetweight << " lbs\n";
break;
case 7 : 
planetweight=weighte*0.92;
std::cout << "Uranus weight = " << planetweight << " lbs\n";
break;
case 8 : 
planetweight=weighte*1.19;
std::cout << "Neptune weight = " << planetweight << " lbs\n";
break;
case 9 : 
std::cout << "Not a planet, sorry\n";
break;
}
}