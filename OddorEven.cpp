#include <iostream> 

int main() {
    int number; 

    // Enter an integer
    std::cout << "Please enter an integer: ";
    std::cin >> number; 

    
    if (number % 2 == 0) {
        
        std::cout << number << " is even." << std::endl;
    } else {
        
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}