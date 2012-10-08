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
          ~Node(){delete m_video;}
      };

    Node *m_head;
  public:
    Vlist(): m_head(NULL){}
    void print();
    int insert(Video *video);
    int length();
    int lookup(string title);
    int remove(string title);
};

#endif
