//cust.cpp
//elberling, Ace
//elberling

#include "cust.h"
#include <iostream>

void Cust::push(double value)
{
 m_head = new Node(value, m_head); 
}


double Cust::pop(bool &full)
{
  if(m_head == NULL)
  {
    full = false;
    return 1;
  }
  else
  {
    Node *ptr = m_head;
    double value = m_head->m_value;
    m_head = m_head->m_next;
    delete ptr;
    full = true;
    return value;
  }
}


bool Cust::empty()
{
  if(m_head == NULL)
    return true;

  return false;
}



