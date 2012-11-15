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
  //cout<<"into enque\n";
  
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
      //cout<<"m_next ="<<current->m_next<<endl;
      if(current->m_next == NULL)
      {
        current->m_next = new Node(cust, NULL);
        break;
      }
      else if(!current->m_cust->arrival(cust) && current->m_next->m_cust->arrival(cust)) //if current is before && next is after, then put inbetween
        {
          Node *ptr = new Node(cust, current->m_next);
          current->m_next = ptr;
        }
      
      else if(current->m_cust->arrival_eq(cust))
      {
        current->m_next = new Node(cust, current->m_next);
      }
    }
  }
}

Cust *Pqueue::deque(int time)
{
  if(m_head==NULL)
    return NULL;
  if(m_head->m_cust->is_time(time))
  {
    Node *ptr = m_head;
    m_head = m_head->m_next;
    return ptr->m_cust;
  }
  return NULL;
}

void Pqueue::push(Cust *cust)
{
  if(m_head==NULL)
    m_head= new Node(cust, NULL);
  else
  {
    for(Node *ptr = m_head; ptr!=NULL; ptr=ptr->m_next)
    {
      if (ptr->m_next==NULL)
      {
        ptr->m_next= new Node(cust, NULL);
        break;
      }
    }
  }
  
}

Cust *Pqueue::pop()
{
  if(m_head ==NULL)
    return NULL;
  else
  {
    Node *ptr = m_head;
    m_head = m_head->m_next;
    return ptr->m_cust;
  }
  
}


