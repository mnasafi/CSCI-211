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

  if(find_node(origin, m_root) == NULL || find_node(destination, m_root)!=NULL)//origin not found or destination found
  {
    return false;
  }
  if(temp = find_node(origin, m_root))//origin found
  {
    if(temp->m_left!= NULL && temp->m_right != NULL)//node destinations full
    {
      return false;
    }
    if(!temp->m_left)//left destination empty
    {
      temp->m_left = new Node(destination, distance, temp);
    }
    else//put it on the right
    {
      temp->m_right = new Node(destination, distance, temp);
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

bool Stree::lookup(string target, string &parent, int &parent_distance, 
                   string &left_child, int &left_child_distance,
                   string &right_child, int &right_child_distance)
{
  Node *temp = find_node(target, m_root);
  
  if(!temp)
  //if(find_node(target, m_root) == NULL)
    return false;
  
  parent = temp->m_parent->m_city;
  parent_distance = temp->m_distance;
  left_child = temp->m_left->m_city;
  left_child_distance = temp->m_left->m_distance;
  right_child = temp->m_right->m_city;
  right_child_distance = temp->m_right->m_distance;
  
  return true;
}


/*
bool Stree::remove(target)
{
  Node *temp;

  
}
*/
