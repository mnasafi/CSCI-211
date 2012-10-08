//video.h
//elberling, Ace
//elberling

#ifndef _VIDEO_H_
#define _VIDEO_H_

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
    bool longer(Video *other);
    bool rated(Video *other);
    bool alpha(Video *other);
    string get_title();
};

#endif
