//routes.cpp
//elberling, Ace
//elberling

#include <iostream>
#include <string>
#include "stree.h"
#include <assert.h>
using namespace std;

int main()
{
  string origin, destination, target, command;
  int distance;
  Stree tree;
  
  
  //command
  while(cin.peek()!=EOF)
    {
    cin>>command;
    if(command != "insert" && command != "distance" && command != "lookup" && command != "path" && command != "remove")
    {
       cerr<<"Error: <"<<command<<"> is not a valid command\n";
       cin.ignore();
    }
    
    if(command == "insert")
      {
        cin>>origin>>destination>>distance;
        cin.ignore();
        if(!tree.insert(origin, destination, distance))
        {
          cerr<<"Error: could not insert "<<origin<<", " <<destination<<endl;
        }
      }
    if(command == "distance")
      {
        if(!tree.distance())
        {
          cerr<<"Error: no path between "<<origin<<" and "<<destination<<endl;
        }
      }
    if(command == "path")
      {
         if(!tree.path())
          {
            cerr<<"Error: no path between "<<origin<<" and "<<destination<<endl;
          }
      }
    if(command == "lookup")
      {
        cin>>target;
        if(!tree.lookup())
        {
          cerr<<"Error: "<<target<<" not in tree\n";
        }
      }
    if(command == "remove")
      {
        cin>>target;
        if(!tree.remove())
        {
          cerr<<"Error: could not remove "<<target<<endl;
        }
 
      }
        
    }

  return 0;
  
}


