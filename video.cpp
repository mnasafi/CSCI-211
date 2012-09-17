//video.cpp
//elberling, Ace
//elberling

#include "video.h"
#include <iostream>
#include <string>

void Video::print(void)
{
  cout<<title<<", "<<url<<", "<<comment<<", "<<length<<", ";
  for(int i=0; i<rating; i++)
    cout<<"*";
  
  cout<<endl;
}
    
    
Video::Video(string t, string u, string c, float l, int r) : title(t), url(u), comment(c), rating(r), length(l)
{
}  

