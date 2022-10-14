#include <iostream>
#include <cmath>

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
    while(std::cin >> in_char)
    {
        //Only allow for alphanumeric characters
        if (std::isalnum(in_char)) {
            //Change the numbers to their word counterparts
            //If not a number, capitalise it.
            //Add the treated character to the output string.

            switch (in_char) {
                case '0':
                    out_str += "ZERO";
                    break;
                case '1':
                    out_str += "ONE";
                    break;
                case '2':
                    out_str += "TWO";
                    break;
                case '3':
                    out_str += "THREE";
                    break;
                case '4':
                    out_str += "FOUR";
                    break;
                case '5':
                    out_str += "FIVE";
                    break;
                case '6':
                    out_str += "SIX";
                    break;
                case '7':
                    out_str += "SEVEN";
                    break;
                case '8':
                    out_str += "EIGHT";
                    break;
                case '9':
                    out_str += "NINE";
                    break;
                default:
                    out_str += std::toupper(in_char);
                    break;
            }
        }
    }
//print output string. 
std::cout << out_str << std::endl;  
}