//vlist.h
//elberling, Ace
//elberling

#ifndef _VLIST_H_
#define _VLIST_H_

#include <iostream>
#include <string>

using namespace std;

class Vlist
{
  private:
    class Node
      {
        public:
          Node(Video *video, Node *next)
          {m_video = video;m_next = next;}
          Video *m_video
          Node *m_next;
      }
  public:
    void print();
    void insert();
    void length();
    void lookup(string title);
    void remove(string title);
};

#endif
