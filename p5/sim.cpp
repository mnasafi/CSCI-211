//sim.cpp
//Ace Elberling
//Elberling

#include<iostream>
#include<fstream>
#include<string>
#include<assert.h>
#include "cust.h"

using namespace std;

int main(int argc, char *argv[])
{
  //SETUP  ERROR CHECKING
  
    // make sure a filename was specified on the command line
    // argc tells us how many command line arguments were given
    // "1" means that no command line arguments were given
    // The first argument is the name of the executable
  if (argc != 3)//should get # of checkers, input file, output file
  {
    cerr << "Error: invalid number of command line arguments.\n";
    return 1;
  }

  if(argv[1] >= 1)
    int checker = argv[1];
  else
  {
    cerr << "Error: invalid number of checkers specified.\n";
  }
    // open the file specified in argv[1].  
    // The "ios::in" opens the file in read mode.
  ifstream inFile(argv[2], ios::in);
                                                                                
  ofstream  outFile(argv[3], ios::out);  // filename is a string holding the filename

    // the in file is an ifstream object connected with the given filename
    // if the contructor failed (could not open file) then !infile returns true
    // THE ! OPERATOR HAS BEEN OVER WRITTEN FOR THE IFSTREAM CLASS
  if (!inFile)
  {
    cerr << "Error: could not open input file <" << argv[1] << ">.\n";
    return 1;
  }

  if (!outFile)
  {
    cerr << "Error: could not open output file <" << argv[2] << ">.\n";
    return 1;
  }
  
  //
  
  
  
  return 0;
}





