#include <iostream>
#include <string>

int main(){
    double num1, num2;
    std::string operation;

std::cout <<" Enter a number " << std::endl;
std::cin >> num1;
std::cout << " Enter an Operation (+,-,*,/)" << std::endl;
std::cin >> operation;
std::cout <<" Enter another number " << std::endl;
std::cin >> num2;

if(operation == "+")
    std::cout<< num1 + num2;
if(operation == "-")
    std::cout<< num1 - num2;
if(operation == "*")
    std::cout<< num1 * num2;
if(operation == "/")
    std::cout<< num1 / num2;
}