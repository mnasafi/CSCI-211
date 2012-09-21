//main.cpp
//elberling, Ace
//elberling

#include <iostream>
#include <string>
#include "video.h"
using namespace std;

int main()
{
  string sort_type, title, url, comment;
  Video* videos[100];
  int rating, i=0, total;
  float length;
  
  //input
  getline(cin, sort_type);
      
  while(getline(cin, title))
    {
      getline(cin, url);
      getline(cin, comment);
      cin>>length>>rating;
      cin.ignore();
      videos[i] = new Video(title, url, comment, length, rating);
      i++;
      if (i>99)
        {
          cerr<<"Too many videos, giving up.";
          return 1;
        }
    }
  total = i;

  //sort
  if (sort_type=="rating")
    {
      for (int last = num_videos -1; last>0; last--)
        {
          for(int cur = 0; cur<last; cur++)
            {
              if(videos[cur]->rated(videos[cur+1]))
                swap(videos[cur], videos[cur+1]);
            }
        }
    }
  else if (sort_type=="length")
    {
       for (int last = num_videos -1; last>0; last--)
         {
           for(int cur = 0; cur<last; cur++)
             {
               if(videos[cur]->longest(videos[cur+1]))
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
 
  for(i=0;i<total;i++)
    videos[i]->print();

  return 0;
  
}


