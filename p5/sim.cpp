//sim.cpp
//Ace Elberling
//Elberling

#include<iostream>
#include<fstream>
#include<string>
#include<assert.h>
#include "cust.h"
#include "pqueue.h"

using namespace std;

void run_simulation(Pqueue &arrival_q, int checker, int customers, ostream &os);
 

int main(int argc, char *argv[])
{
  //SETUP  ERROR CHECKING
  int checker;

  if (argc != 4)//should get # of checkers, input file, output file. 1 + # of command inputs
  {
    cerr << "Error: invalid number of command line arguments.\n";
    return 1;
  }

  if(argv[1] > 0)
    checker = atoi(argv[1]);
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
  int a_time, items,  num_customers = 0;
  
  Pqueue arrival_q;
  
  while(!inFile.eof())
  {
    inFile>>name>>type>>a_time>>items>>ws;
    
    Cust *temp = new Cust(name, type, a_time, items);
    arrival_q.enque(temp);
    num_customers++;
  }
  cout<<"# of checkers="<<checker<<endl;
//RUN SIMULATION
 // run_simulation(arrival_q, checker, num_customers, outFile);
  
  return 0;
}

void run_simulation(Pqueue &arrival_q, int checker, int customers, ostream &os)
{
  
  
  
} 


