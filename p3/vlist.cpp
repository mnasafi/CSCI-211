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
    cout<<"insert if 1\n";
  }
  else if(m_head->m_video->get_title() == video->get_title())//checking if node title already exists
  {
    cout<<"insert, else if 1\n";
    return 1; //error checking
  }
  else if(m_head->m_video->alpha(video)) //if true video is before m_head in alpha
  {  

    cout<<"insert, else if 2\ntitle pushed in:"<<video->get_title()<<"\ntitle in m_video :"<<m_head->m_video->get_title()<<endl;
    m_head = new Node(video, m_head);
  }
  else 
  {
    cout<<"insert else before for\n";
    
    for (Node *current = m_head; current !=NULL; current = current->m_next)
    {
      cout<<"insert else after for\n";
      if(m_head->m_video->get_title() == video->get_title() || m_head->m_next->m_video->get_title() == video->get_title())
      {
        cout<<"insert else after for inside error check\n";
        return 1; //error checking
      }
      if(current->m_next != NULL)
      {
        cout<<"insert else after for inside if 1\n";
        if(!current->m_video->alpha(video) && current->m_next->m_video->alpha(video)) //if current is before && next is after, then put inbetween
        {
          Node *ptr = new Node(video, current->m_next);
          current->m_next = ptr;
        }
      }
      else
        current->m_next = new Node(video, NULL);
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
  }
  for (Node *current = m_head; current !=NULL; current = current->m_next)
  {
    if(current->m_next==NULL)
      return 1;
    else if(current->m_next->m_video->get_title() == title)
      {
        ptr=current->m_next;
        delete current;
        current = ptr;
      }
 }


  return 0;
  
}
