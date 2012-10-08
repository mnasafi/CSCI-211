//dstack.cpp
//elberling, Ace
//elberling

#include "dstack.h"
#include <iostream>

void Dstack::push(double value)
{
 m_head = new Node(value, m_head); 
}


double Dstack::pop()
{
  Node *ptr = m_head;
  double value = m_head->m_value;
  m_head = m_head->m_next;
  delete ptr;
   
  return value;
}


bool Dstack::empty()
{
  if(m_head == NULL)
    return true;

  return false;
}



