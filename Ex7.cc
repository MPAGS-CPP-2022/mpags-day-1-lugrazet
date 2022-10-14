#include <iostream>
#include <string>
#include <vector>

/*
Aims: 
Read through the Command Line Arguments, check for -h or --help and return a helpful message

Usage:
./a.out with any number of arguments of the form -a --h

*/
int main(int argc, char* argv[])
{
    //Store the command line arguments.
    const std::vector<std::string> cmdLineArgs { argv, argv+argc };
    
    //Strings to print out help.
    std::string help_str = "Hello. Unfortunately there is no help to be found. Good Luck";
    std::string unknown_arg_str = "Unknown arguments please try -h or --help for documentation";

    //Use of flag to prevent multiple printings.
    int flag_help{0};
    //Check all of the inputted arguments.
    for (unsigned int i{1}; i<cmdLineArgs.size(); i++)
    {   
        //If it starts with -h or --help we don't want to check all the other lines. 
        int check{0};
        if (check==0)
        {
        if ( cmdLineArgs[i] == std::string("-h") or cmdLineArgs[i] == std::string("--help") )
            {
                flag_help = 1;
                check += 1;
            }
        }
    }

    //Output the responses.   
    if (flag_help==1)
    {
        std::cout << help_str << "\n" << std::endl;
    }
    else
    {
        std::cout << unknown_arg_str << "\n" << std::endl;
    }
    return 0;
}