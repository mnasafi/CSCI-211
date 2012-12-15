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
  string origin, destination, target, command, p, l, r;
  int distance, pd, ld, rd;
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
/*    if(command == "distance")
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
*/    if(command == "lookup")
      {
        cin>>target;
        if(!tree.lookup(target, p, pd, l,ld,r,rd))
        {
          cerr<<"Error: "<<target<<" not in tree\n";
          cin.ignore();
        }
        else
          cout<<target<<": ";
          if(p=="none")
            cout<<"none, ";
          else
            cout<<p<<"("<<pd<<"), ";
          if(l=="none")
            cout<<"none, ";
          else
            cout<<l<<"("<<ld<<"), ";
          if(r=="none")
            cout<<"none\n";
          else
            cout<<r<<"("<<rd<<")\n";
      }
/*    if(command == "remove")
      {
        cin>>target;
        if(!tree.remove())
        {
          cerr<<"Error: could not remove "<<target<<endl;
        }
 
      }
*/        
    }

  return 0;
  
}


