#include <cmath>
#include <iostream>
#include <vector>
/*
Aims:
Receive keyboard input. Remove non-alphanumeric characters. 
Replace any numerical values with their word counterparts. Change all letters to capital letters. Print out the new string.

Usage: 
Run. Type until satisfied, then CRTL+D, receive printed output.
*/

int main()
{
    //Initiating in_char to enter in the user input and the output string
    char in_char{'x'};
    std::string out_str{""};

    //Input into in_char
    std::cout << "Awaiting User Input, CTRL+D when finished" << std::endl;
    while (std::cin >> in_char) {
        if (std::isalnum(in_char)) {
            if (std::isalpha(in_char)) {
                out_str += std::toupper(in_char);
            } else {
                std::vector<std::string> num_word_vec = {
                    "ZERO", "ONE", "TWO",   "THREE", "FOUR",
                    "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
                std::vector<char> num_char_vec = {'0', '1', '2', '3', '4',
                                                  '5', '6', '7', '8', '9'};

                for (unsigned int i{0}; i < num_word_vec.size(); i++) {
                    if (in_char == num_char_vec[i]) {
                        out_str += num_word_vec[i];
                    }
                }
            }
        }
    }
    //print output string.
    std::cout << out_str << std::endl;
    return 0;
}