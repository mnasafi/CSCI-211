//routes.cpp
//elberling, Ace
//elberling

#include <iostream>
#include <string>
#include "stree.h"
#include <assert.h>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
  string origin, destination, target, command, p, l, r;
  int distance, pd, ld, rd;
  Stree tree;
  vector<string> tpath;
  
  
  //command
  while(cin.peek()!=EOF)
    {
    cin>>command;
    if(command != "nothing" && command != "see" && command != "insert" && command != "distance" && command != "lookup" && command != "path" && command != "remove")
    {
       cerr<<"Error: <"<<command<<"> is not a valid command\n";
       cin.ignore(1000,10);
    }
    
    if(command == "see")
    {
      tree.seetree();
    }
    
    if(command == "insert")
      {
        cin>>origin>>destination>>distance;
        //cin.ignore();
        if(!tree.insert(origin, destination, distance) || distance < 1)
        {
          cerr<<"Error: could not insert "<<origin<<", " <<destination<<endl;
          //cout<<"error\n";
        }
      //tree.seetree();
      }
    if(command == "distance")
      {
        cin>>origin>>destination;
        
        //tree.seetree();
        
        if((distance = tree.distance(origin, destination))< 1)
        {
          cerr<<"Error: no path between "<<origin<<" and "<<destination<<endl;
          //cin.ignore();
        }
        else
        {
          cout<<origin<<" to "<<destination<<" is "<<distance;
          if (distance == 1)
            cout<<" mile\n";
          else
            cout<<" miles\n";
        }
        cin.ignore();
      }
    if(command == "path")
      {
         cin>>origin>>destination;
         
         if(!tree.path(origin, destination, tpath))
          {
            cerr<<"Error: no path between "<<origin<<" and "<<destination<<endl;
            cin.ignore();
          }
          else
          {
            //cout<<tpath.size();
            cin.ignore();
            cout<<origin;
            for(unsigned i = tpath.size(); i > 0; i--)
            {
              cout<<" --> "<<tpath[i-1];
              
            }
            cout<<endl;
          }
      }
    if(command == "lookup")
      {
        cin>>target;
        if(!tree.lookup(target, p, pd, l,ld,r,rd))
        {
          cerr<<"Error: "<<target<<" not in tree\n";
          cin.ignore();
        }
        else
        {
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
        cin.ignore();
        }
      }
    if(command == "remove")
      {
        cin>>target;
        if(!tree.remove(target))
        {
          cerr<<"Error: could not remove "<<target<<endl;
        }
        cin.ignore(1000,10);
      }
        
    command = "nothing";
    }

  return 0;
  
}


