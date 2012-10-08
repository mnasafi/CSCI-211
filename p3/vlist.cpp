//vlist.cpp
//elberling, Ace
//elberling

#include "vlist.h"
#include <iostream>
#include <string>

void Vlist::print()
{
  Node *ptr = m_head;
  if(ptr == NULL)
    return;
  
  while(ptr!=NULL)
  {
    ptr->m_video-> print();
    ptr = ptr->m_next;
  }
}
    
    
int Vlist::insert(Video *video)
{ 
  if(m_head==NULL)
  {
    m_head = new Node(video, NULL);
  }
  else if(m_head->m_video->get_title() == video->get_title())//checking if node title already exists
  {
    return 1; //error checking
  }
  else if(m_head->m_video->alpha(video)) //if true video is before m_head in alpha
  {  

    m_head = new Node(video, m_head);
  }
  else 
  {
    for (Node *current = m_head; current !=NULL; current = current->m_next)
    {
     if(current->m_next != NULL)
      {
        if(current->m_video->get_title() == video->get_title() || current->m_next->m_video->get_title() == video->get_title())
        {
          return 1; //error checking
        }
 
        if(!current->m_video->alpha(video) && current->m_next->m_video->alpha(video)) //if current is before && next is after, then put inbetween
        {
          Node *ptr = new Node(video, current->m_next);
          current->m_next = ptr;
          return 0;
        }
      }
      else
      {
        current->m_next = new Node(video, NULL);
        return 0;
      }
    }
  }
  return 0;
}


int Vlist::length()
{
  int length=0;
  if(m_head == NULL)
    return length;
  else
  {
    for (Node *current = m_head; current !=NULL; current = current->m_next)
    {
      length++;
    }
    return length;
  }
}


int Vlist::lookup(string title)
{
  if(m_head == NULL)
    return 1;
  for (Node *current = m_head; current !=NULL; current = current->m_next)
  {
    if(current->m_video->get_title() == title)
      {
        current->m_video->print();
        return 0;
      }
    else if(current->m_next==NULL)
      return 1;
  }

  return 0;
}

int Vlist::remove(string title)
{
  Node *ptr;
  if(m_head == NULL)
    return 1;
  if(m_head->m_video->get_title() == title)
  {
    ptr=m_head->m_next;
    delete m_head;
    m_head = ptr;
    return 0;
  }
  for (Node *current = m_head; current !=NULL; current = current->m_next)
  {
    if(current->m_next==NULL)
      return 1;
    else if(current->m_next->m_video->get_title() == title)
      {
        ptr=current->m_next;
        current->m_next = ptr->m_next;
        delete ptr;
        return 0;
      }
 }


  return 0;
  
}
