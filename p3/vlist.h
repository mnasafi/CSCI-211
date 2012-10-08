//vlist.h
//elberling, Ace
//elberling

#ifndef _VLIST_H_
#define _VLIST_H_

#include <iostream>
#include <string>
#include "video.h"

using namespace std;

class Vlist
{
  private:
    class Node
      {
        public:
          Node(Video *video, Node *next)
          {m_video = video;m_next = next;}
          Video *m_video;
          Node *m_next;
      };

    Node *m_head;
  public:
    Vlist(): m_head(NULL){}
    void print();
    void insert(Video *video);
    void length();
    void lookup(string title);
    void remove(string title);
};

#endif
