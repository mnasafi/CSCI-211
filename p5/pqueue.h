//pqueue.h
//Ace Elberling
//Elberling

#ifndef _PQUEUE_H_
#define _PQUEUE_H_

#include<iostream>
#include<string>
#include "cust.h"

using namespace std;

class Pqueue
{
  private:
    class Node
    {
      public:
        Node(Cust *cust, Node *next)
         {m_cust = cust;m_next = next;
        Cust *m_cust;
        Node *m_next;
        ~Node(){delete m_cust;}
    };
    Mode *m_head;
  public:
    Pqueue():m_head(NULL){}
    void enque(Cust *cust);
    Cust *dequeue();
  
};


