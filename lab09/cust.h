//cust.h
//elberling, Ace
//elberling

#ifndef _CUST_H_
#define _CUST_H_

#include <iostream>
#include <string>


using namespace std;

class Cust
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
    Cust(): m_head(NULL){}
    void push(double value);
    double pop(bool &full);
    bool empty();
    ~Cust(){delete m_head;}
};

#endif
