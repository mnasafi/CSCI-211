//main.cpp
//elberling, Ace
//elberling

#include <iostream>
#include <string>
#include "video.h"
#include "vlist.h"
using namespace std;

int main()
{
  string sort_type, title, url, comment, command;
  Video* video;
  Vlist* vlist = new Vlist();
  int rating;
  float length;
  
  //command
  while(getline(cin, command))
    {

    if(command != "insert" && command != "length" && command != "lookup" && command != "print" && command != "remove")
      {
         cerr<<command<<" is not a legal command, giving up.\n";
         return 1;
      }
    
    if(command == "insert")
      {
        getline(cin, title);
        getline(cin, url);
        getline(cin, comment);
        cin>>length>>rating;
        cin.ignore();
        video = new Video(title, url, comment, length, rating);
        if(vlist->insert(video)==1)
          {
            cerr<<"Could not insert video "<<title<<", already in list.\n";
            return 1;
          }
      }
    if(command == "print")
      {
        vlist->print();
      }
    if(command == "length")
      {
         cout<<vlist->length()<<endl; 
      }
    if(command == "lookup")
      {
        getline(cin, title);
        if(vlist->lookup(title)==1)
          {
            cerr<<"Title "<<title<<" not in list.\n";
          }
      }
    if(command == "remove")
      {
        getline(cin, title);
        if(vlist->remove(title)==1)
          {
            cerr<<"Title "<<title<<" not in list, could not delete.\n";
          }
 
      }
        
    }

  return 0;
  
}


