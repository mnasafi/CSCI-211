//vlist.cpp
//elberling, Ace
//elberling

#include "vlist.h"
#include <iostream>
#include <string>

void Vlist::print()
{
  Node *ptr = m_head;
  while(ptr!=NULL)
  {
    ptr->m_video-> print();
    ptr = ptr->m_next;
  }
}
    
    
void Vlist::insert(Video *video)
{
  if(m_head==NULL)
    m_head = new Node(video, NULL);
  else if(m_head->m_video->alpha(video)) //if true video is before m_head in alpha
    m_head = new Node(video, m_head);
  else
  {
    for (Node *current = m_head; current !=NULL; current = current->m_next)
    {
      if(current->m_next != NULL)
      {
        if(!current->m_video->alpha(video) && current->m_next->m_video->alpha(video))
        {
          Node *ptr = new Node(video, current->m_next);
          current->m_next = ptr;
        }
      }
    }
  }
    
}


void Vlist::length()
{
  //print number of videos in list
  //return nothing
}


void Vlist::lookup(string title)
{
  //if given title is in video list, print it
  //return nothing
}

void Vlist::remove(string title)
{
  //if title is in list, remove it
  //return nothing
  
}
