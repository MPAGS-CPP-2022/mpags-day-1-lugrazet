#include <iostream>
#include <string>

int main(){
    //Create double and integer variables
    //Output the product of these
    double a{75.9};
    int b{11};
    std::cout << a * b << std::endl;

    int f{10};
    //Create another string variable
    //Create a single char variable, assign it the value of one of the 
    //letters in the string, and then output this variable
    std::string msg{"This is a string"};
    char c{msg[2]};

    std::cout << c << std::endl;

    return 0;
}
