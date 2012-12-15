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
  //see(m_root);
  //cout<<"out of see\n";
  if(!m_root)//tree is empty
  {
    m_root = new Node(origin, 0, NULL); //(city, distance, parent)
    m_root->m_left = new Node(destination, distance, m_root);
    return true;
  }
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
    if(find_node(destination, m_root)!=NULL)
      return false;
    
    if(!temp->m_left)//left destination empty
    {
      temp->m_left = new Node(destination, distance, temp);
    }
    else//put it on the right
    {
      temp->m_right = new Node(destination, distance, temp);
    }
  }
  //see(m_root);
  return true;
}

Stree::Node *Stree::find_node(string target, Node *cur_root)
{
  if(!cur_root)
  {
    cout<<"target not found\n";
    return NULL;
  }
  cout<<"\ntarget: "<<target<<endl;
  cout<<"current root: "<<cur_root->m_city<<"("<<cur_root->m_distance<<")\n";
  if(cur_root->m_city == target)
    return cur_root;
  cout<<"not in current, check left\n";
  Node *left = find_node(target, cur_root->m_left);
  if(left!=NULL)
    {
    cout<<"found target on left\n";
    return left;
    }
  cout<<"not in left, check right\n";
  Node *right = find_node(target, cur_root->m_right);
  if(right!=NULL)
  {
    cout<<"found target on right\n";
    return right;
  //return find_node(target, cur_root->m_right);
  }
}

bool Stree::lookup(string target, string &parent, int &parent_distance, 
                   string &left_child, int &left_child_distance,
                   string &right_child, int &right_child_distance)
{
  Node *temp = find_node(target, m_root);
  
  if(!temp)
  //if(find_node(target, m_root) == NULL)
    return false;
//  cout<<temp->m_parent->m_city<<endl;
  if(!temp->m_parent)
    parent = "none";
  else
  {
    parent = temp->m_parent->m_city;
    parent_distance = temp->m_distance;
  }
  if(!temp->m_left)
    left_child = "none";
  else
  {
    left_child = temp->m_left->m_city;
    left_child_distance = temp->m_left->m_distance;
  } 
  if(!temp->m_right)
    right_child = "none";
  else
  {
    right_child = temp->m_right->m_city;
    right_child_distance = temp->m_right->m_distance;
  }
  return true;
}

int Stree::distance(string origin, string destination)
{
  Node *cur_root = m_root;
  Node *cur_child;
  int distance=0;
  
  cur_root = find_node(origin, cur_root);
  
  if(!cur_root)
    return 0;
  cur_child = find_node(destination, cur_root);
  if(!cur_child)
    return 0;
  while(cur_child != cur_root)
  {
    distance == cur_child->m_distance + distance;
    cur_child = cur_child->m_parent;
  }
  
  
  return distance;
}

bool Stree::path()
{
  
  
  return true;
}


bool Stree::remove(string target)
{
  //Node *temp;

  return true;
}

void Stree::seetree()
{
  see(m_root);
  
}


Stree::Node *Stree::see(Node *cur_root)
{
  if(!m_root)
  {
    cout<<"the tree is empty\n\n";
    return NULL;
  }
  
  cout<<"name: "<<cur_root->m_city<<"("<<cur_root->m_distance<<"), parent: ";
  if(!cur_root->m_parent)
    cout<<"none, ";
  else
    cout<<cur_root->m_parent->m_city<<", ";
  cout<<"Left child: ";
  if(!cur_root->m_left)
    cout<<"none, ";
  else
    cout<<cur_root->m_left->m_city<<", ";
 cout<<"right child: ";
 if(!cur_root->m_right)
    cout<<"none\n";
  else
    cout<<cur_root->m_left->m_city<<"\n";

  if(cur_root->m_left)
    see(cur_root->m_left);
  else if(cur_root->m_right)
    see(cur_root->m_right);
  
}
