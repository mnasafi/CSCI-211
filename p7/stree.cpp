//stree.cpp
//Ace Elberling
//Elberling

#include<iostream>
#include "stree.h"
#include<string>
#include<assert.h>


void Stree::print()
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




