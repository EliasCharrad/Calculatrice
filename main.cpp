#include <iostream>
#include "formulas.hpp"

int main(){
    char op;
    double a,b;
    std::cout << "input your calculation\n";
    std::cin >> a >> op >> b;

    switch (op)
    {
    case '+':
        std::cout << addition(a,b);
        break;
    case '-':
        std::cout << subtraction(a,b);
        break;
    case '/':
        std::cout << division(a,b);
        break;
    case '*':
        std::cout << product(a,b);
        break;
    default:
        break;
    }
    
    std::cout << "contine ?:\n y / n\n";
    std::string answer;
    std::cin >> answer;

    if (answer == "y")
    {
        main();
    }
    else return 0;
}
