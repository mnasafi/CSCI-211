//pqueue.cpp
//Ace Elberling
//Elberling

#include<iostream>
#include "pqueue.h"
#include<string>


void Pqueue::print()
{
  Node *ptr = m_head;

  if(ptr == NULL)
    return;

  while(ptr!=NULL)
  {
    ptr->m_cust->print();
    ptr = prt->m_next;
  }
  
}

void Pqueue::enque(Cust *cust)
{
  if(m_head==NULL)//empty
  {
    m_head = new Node(cust, NULL);
  }
  else if(m_head->m_cust->arrival(cust)) //if true new cust is before m_head
  {  
    m_head = new Node(cust, m_head);
  }
  else 
  {
    for (Node *current = m_head; current !=NULL; current = current->m_next)
    {
      if(current->m_next != NULL)
      {
        if(!current->m_cust->arrival(cust) && current->m_next->m_cust->arrival(cust)) //if current is before && next is after, then put inbetween
        {
          Node *ptr = new Node(cust, current->m_next);
          current->m_next = ptr;
        }
      }
      else
      {
        current->m_next = new Node(cust, NULL);
      }
    }
  }
}

Cust *Pqueue::deque()
{
  //temp_cust
  return 0;
  //return temp_cust;
}



