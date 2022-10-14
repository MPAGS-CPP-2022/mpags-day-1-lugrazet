#include <iostream>
#include <cmath>


/*Letters must be only upper-case
Numbers must be changed to words
Any other non-alphanumeric characters need to be removed
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
        if (std::isalnum(in_char))
        {
            
        //Change the numbers to their word counterparts
        switch (in_char)
        {
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
            
            //If not a number, then add the capitalised letter to the output 
            default:
                out_str += std::toupper(in_char);
                break;
        }
        
        
        }

        
    }
//print output string. 
std::cout << out_str << std::endl;  
}