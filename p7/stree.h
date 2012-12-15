//stree.h
//Ace Elberling
//Elberling

#ifndef _STREE_H_
#define _STREE_H_

#include<iostream>
#include<string>

using namespace std;

class Stree
{
  private:
    class Node
    {
      public:
        Node(string city, int distance, Node *parent)
         {m_left = NULL;m_right = NULL; m_city = city; m_distance = distance;}
        Node *m_left;
        Node *m_right;
        Node *m_parent;
        string m_city;
        int m_distance;
        
        ~Node(){delete m_left; delete m_right;}
    };

    Node *m_root;

  
  public:
    //bool insert(int value, Node *&cur_root) //not correct for this program
    //*& is a reference to a pointer to a node, used when the root is empty
    bool insert(string origin, string destination, int distance);
    Node *find_node(string origin, Node *cur_node);
    bool lookup(string target, string &parent, int &parent_distance, 
                string &left_child, int &left_child_distance, 
                string &right_child, int &right_child_distance);
    //bool distance();
    //bool path();
    //bool remove(string target);
    Node *see(Node *cur_node);
    ~Stree()
      {delete m_root;}
    
};

#endif
