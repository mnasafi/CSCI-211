//video.h
//elberling, Ace
//elberling

#ifndef _COURSE_H_
#define _COURSE_H_

#include <iostream>
#include <string>

using namespace std;

class Video
{
  private:
    int rating;
    float length;
    string sort, title, url, comment;
    
  public:
    void print(void);
    Video(string t, string u, string c, float l, int r);
  
};

#endif
