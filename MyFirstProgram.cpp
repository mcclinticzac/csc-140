#include <iostream>
#include <string>

int main() {
    int myInt = 42;
    float myFloat = 3.14f;
    double myDouble = 2.71828;
    char myChar = 'C';
    bool myBool = true;
    std::string myString = "Hello, World!";

    std::cout << "Integer: " << myInt << std::endl;
    std::cout << "Float: " << myFloat << std::endl;
    std::cout << "Double: " << myDouble << std::endl;
    std::cout << "Character: " << myChar << std::endl;
    std::cout << "Boolean: " << std::boolalpha << myBool << std::endl;
    std::cout << "String: " << myString << std::endl;

    return 0;
}