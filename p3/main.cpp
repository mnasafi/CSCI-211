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
  Video* videos[100];
  int rating, i=0;
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
        getline(cin, title)
        getline(cin, url);
        getline(cin, comment);
        cin>>length>>rating;
        cin.ignore();
         = new Video(title, url, comment, length, rating);
 
        
        
      }
    }
  
  //input
  getline(cin, sort_type);
    
  if(sort_type != "rating" && sort_type != "length" && sort_type != "title")
    {
       cerr<<sort_type<<" is not a legal sorting method, giving up.\n";
       return 1;
    }
  
      
  while(getline(cin, title))
    {
      getline(cin, url);
      getline(cin, comment);
      cin>>length>>rating;
      cin.ignore();
      videos[i] = new Video(title, url, comment, length, rating);
      i++;
      if (i>100)
        {
          cerr<<"Too many videos, giving up.\n";
          return 1;
        }
    }
  int num_videos = i;




/*
  //sort
  if (sort_type=="rating")
    {
      for (int last = num_videos -1; last>0; last--)
        {
          for(int cur = 0; cur<last; cur++)
            {
              if(videos[cur]->rated(videos[cur+1]))
                swap(videos[cur+1], videos[cur]);
            }
        }
    }
  else if (sort_type=="length")
    {
       for (int last = num_videos -1; last>0; last--)
         {
           for(int cur = 0; cur<last; cur++)
             {
               if(videos[cur]->longer(videos[cur+1]))
                 swap(videos[cur], videos[cur+1]);
             }
         }
      
    }
  else if (sort_type=="title")
    {
       for (int last = num_videos -1; last>0; last--)
         {
           for(int cur = 0; cur<last; cur++)
             {
               if(videos[cur]->alpha(videos[cur+1]))
                 swap(videos[cur], videos[cur+1]);
             }
         }
      
    }
 
  for(i=0;i<num_videos;i++)
    videos[i]->print();
*/

  return 0;
  
}


