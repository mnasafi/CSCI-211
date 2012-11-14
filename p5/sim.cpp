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
  
  //Pqueue *arrival_q = new Pqueue();
  
  while(!inFile.eof())
  {
    inFile>>name>>type>>a_time>>items>>ws;
    
    Cust *temp = new Cust(name, type, a_time, items);
    temp->print();
    //arrival_q->enque(temp);
    num_customers++;
  }
  
//  
  
  return 0;
}





