#include <iostream>
#include <vector>

int main() {
//notes 1
char vowels[] = {'a', 'e', 'i', 'o', 'u'};
//      indexes:  0    1    2    3    4

std::cout << vowels[0]<<"\n"; // Prints: a

vowels[0] = 'r';

std::cout << vowels[0]<<"\n"; // Prints: r

}