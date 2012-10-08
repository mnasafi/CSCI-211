//dstack.h
//elberling, Ace
//elberling

#ifndef _DSTACK_H_
#define _DSTACK_H_

#include <iostream>
#include <string>


using namespace std;

class Dstack
{
  private:
    class Node
      {
        public:
          Node(double value, Node *next)
          {m_value = value;m_next = next;}
          Node *m_next;
          double m_value;
          //~Node()
      };

    Node *m_head;
  public:
    Dstack(): m_head(NULL){}
    void push(double value);
    double pop();
    bool empty();
};

#endif
