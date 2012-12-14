//stree.cpp
//Ace Elberling
//Elberling

#include<iostream>
#include "stree.h"
#include<string>
#include<assert.h>


using namespace std;

bool Stree::insert(string origin, string destination, int distance)
{
  Node *temp;
  
  if(!m_root)//tree is empty
    m_root = new Node(origin, 0, NULL); //(city, distance, parent)

//errors  
  if(find_node(origin, m_root) == NULL || find_node(destination, m_root)!=NULL)//origin not found or destination found
  {
    cerr<<"Error: could not insert "<<origin<<", "<<destination<<endl;
    return false;
  }
  if(temp = find_node(origin, m_root))//origin found
  {
    if(temp->m_left!= NULL && temp->m_right != NULL)//node destinations full
    {
      cerr<<"Error: could not insert "<<origin<<", "<<destination<<endl;
      return false;
    }
    if(!temp->m_left)//left destination empty
    {
      temp->m_left = new Node(destination, distance, temp);
      //return true;
    }
    else//put it on the right
    {
      temp->m_right = new Node(destination, distance, temp);
      //return true;
    }
  }
  return true;
}

Stree::Node *Stree::find_node(string target, Node *cur_root)
{
  if(!cur_root)
    return NULL;
  if(cur_root->m_city == target)
    return cur_root;
  
  Node *left = find_node(target, cur_root->m_left);
  if(left!=NULL)
    return left;
  return find_node(target, cur_root->m_right);

}
/*
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

*/


