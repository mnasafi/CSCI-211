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
    ptr = ptr->m_next;
  }
  
}

void Pqueue::enque(Cust *cust)
{
  cout<<"into enque\n";
  
  if(m_head==NULL)//empty
  {
    m_head = new Node(cust, NULL);
  }
  else if(m_head->m_cust->arrival(cust)) //if true new cust is before m_head
  {  
    m_head = new Node(cust, m_head);
  }
  else if(m_head->m_next == NULL)
    m_head->m_next= new Node(cust, NULL);
  else 
  {
    for (Node *current = m_head->m_next; current !=NULL; current = current->m_next)
    {
      cout<<"m_next ="<<current->m_next<<endl;
      if(current->m_next == NULL)
      {
        current->m_next = new Node(cust, NULL);
      }
      else if(!current->m_cust->arrival(cust) && current->m_next->m_cust->arrival(cust)) //if current is before && next is after, then put inbetween
        {
          Node *ptr = new Node(cust, current->m_next);
          current->m_next = ptr;
        }
      
      else if(current->m_cust->arrival(cust))
      {
        current->m_next = new Node(cust, current->m_next);
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



