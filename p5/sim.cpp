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
  if (argc != 4)//should get # of checkers, input file, output file. 1 + # of command inputs
  {
    cerr << "Error: invalid number of command line arguments.\n";
    return 1;
  }

  if(atoi(argv[1]) > 0)
    int checker = atoi(argv[1]);
  else
  {
    cerr << "Error: invalid number of checkers specified.\n";
    return 1;
  }

//Input file & error check  
  ifstream inFile(argv[2], ios::in);
    // the in file is an ifstream object connected with the given filename
    // if the contructor failed (could not open file) then !infile returns true
    // THE ! OPERATOR HAS BEEN OVER WRITTEN FOR THE IFSTREAM CLASS
  if (!inFile)
  {
    cerr << "Error: could not open input file <" << argv[2] << ">.\n";
    return 1;
  }

//output file & error check
  ofstream  outFile(argv[3], ios::out);  // filename is a string holding the filename
  if (!outFile)
  {
    cerr << "Error: could not open output file <" << argv[3] << ">.\n";
    return 1;
  }
  
//SETUP INPUT
  string name, type;
  int a_time, items, clock = 1, num_customers = 0;
  
  
  while(!inFile.eof())
  {
    inFile>>name>>type>>a_time>>items>>ws;
    
    Cust *temp = new Cust(name, type, a_time, items);
    temp->print();
    num_customers++;
  }
  
//  
  
  return 0;
}





