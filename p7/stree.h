//stree.h
//Ace Elberling
//Elberling

#ifndef _STREE_H_
#define _STREE_H_

#include<iostream>
#include<string>

using namespace std;

class Stree
{
  private:
    class Node
    {
      public:
        Node(, Node *next)
         {m_parent = parent;m_left = left;m_right = right; m_city = city; m_distance = distance;}
        Cust *m_cust;
        Node *m_left;
        Node *m_left;
        
       // ~Node(){delete m_cust;}
    };

    Node *m_root;

  
  public:
    Pqueue(): m_head(NULL){}
    void enque(Cust *cust);
    Cust *deque(int time);
    void print();
    void push(Cust *cust);
    Cust *pop();
  
};

#endif
