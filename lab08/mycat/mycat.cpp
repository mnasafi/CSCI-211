/*
    Simple program to demonstrate file I/O and 
    how to access command line arguments.  For example:

        $ mycat myinput 

    "myinput" is specified on the command line when the program mycat is started.

    This string (called a command line argument) is available in the main() 

    This program is similar to the Linux cat program.  It accepts a single
    command line argument (the name of a file), then it opens the file and 
    reads each line from the file and writes that line to standard output

        $ cat myfile
        one
        two
        three
        $ mycat myfile
        one
        two
        three
        $

*/

#include <iostream>
#include <fstream>
#include <string>
#include <assert.h>

using namespace std;

// in order to access the command line arguments, declare main() like this
int main(int argc, char *argv[])
{
    // make sure a filename was specified on the command line
    // argc tells us how many command line arguments were given
    // "1" means that no command line arguments were given
    // The first argument is the name of the executable
    if (argc < 1)
    {
        // write to standar error (cerr)
        cerr << "No filename specified." << endl;
        return 1; // 1 is error condition
    }
    if (argc > 2)
    {
        cerr << "Too many command line arguments specified." << endl;
        return 1;
    }

    // open the file specified in argv[1].  
    // The "ios::in" opens the file in read mode.
    ifstream my_ifile(argv[1], ios::in);

    // my_ifile is an ifstream object connected with the given filename
    // if the contructor failed (could not open file) then !my_file returns true
    // THE ! OPERATOR HAS BEEN OVER WRITTEN FOR THE IFSTREAM CLASS
    if (!my_ifile)
    {
        cerr << "Could not open input file <" << argv[1] << ">." << endl;
        return 1; // error
    }

    // buffer to hold input line
    string buffer;

    // as long as there is more input (not end of file), read a line
    while (getline(my_ifile, buffer, '\n') != false)
    {
        // write the line to standard output
        cout << buffer << endl;
    }

    return 0; // everything is ok
}
