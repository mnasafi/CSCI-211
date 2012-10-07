//vlist.cpp
//elberling, Ace
//elberling

#include "vlist.h"
#include <iostream>
#include <string>

void Vlist::print()
{
  m_video.print();
}
    
    
void Vlist::insert(Video *video)
{
  if(m_head==NULL)
    m_head = new Node(video, m_head);
  else if(m_head->m_video->alpha(*video)) //if true video is before m_head in alpha
    m_head = new Node(video, m_head);
  
    
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
