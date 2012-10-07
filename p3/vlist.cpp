//vlist.cpp
//elberling, Ace
//elberling

#include "vlist.h"
#include <iostream>
#include <string>

void Vlist::print(void)
{
  cout<<title<<", "<<url<<", "<<comment<<", "<<length<<", ";
  for(int i=0; i<rating; i++)
    cout<<"*";
  
  cout<<endl;
}
    
    
void Vlist::insert()
{
  //insert item into video stack
  //return nothing
}


void Vlist::length()
{
  //print number of videos in list
  //return nothing
}


void Vlist::lookup(string title)
{
  //if given title is in video list, print it
  //return nothing
}

void Vlist::remove(string title)
{
  //if title is in list, remove it
  //return nothing
  
}
