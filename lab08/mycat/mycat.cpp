//mycat.cpp
//ace elberling
//elberling


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
    if (argc < 2)
    {
        // write to standar error (cerr)
        cerr << "Must specify input and output file." << endl;
        return 1; // 1 is error condition
    }
    
    if (argc > 3)
    {
        cerr << "Too many command line arguments specified." << endl;
        return 1;
    }

    // open the file specified in argv[1].  
    // The "ios::in" opens the file in read mode.
    ifstream my_ifile(argv[1], ios::in);
    
  ofstream  my_ofile(argv[2], ios::out);  // filename is a string holding the filename

    // my_ifile is an ifstream object connected with the given filename
    // if the contructor failed (could not open file) then !my_file returns true
    // THE ! OPERATOR HAS BEEN OVER WRITTEN FOR THE IFSTREAM CLASS
    if (!my_ifile)
    {
        cerr << "Could not open input file <" << argv[1] << ">." << endl;
        return 1; // error
    }

    if (!my_ofile)
    {
        cerr << "Could not open output file <" << argv[2] << ">." << endl;
        return 1; // error
    }



    // buffer to hold input line
    string buffer;

    // as long as there is more input (not end of file), read a line
    while (getline(my_ifile, buffer, '\n') != false)
    {
        // write the line to standard output
        my_ofile << buffer << endl;
    }

    return 0; // everything is ok
}
