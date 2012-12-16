//stree.h
//Ace Elberling
//Elberling

#ifndef _STREE_H_
#define _STREE_H_

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Stree
{
  private:
    class Node
    {
      public:
        Node(string city, int distance, Node *parent)
         {m_left = NULL;m_right = NULL; m_city = city; m_distance = distance;m_parent = parent;}
        Node *m_left;
        Node *m_right;
        Node *m_parent;
        string m_city;
        int m_distance;
        
        ~Node(){delete m_left; delete m_right;}
    };

    Node *m_root;

  
  public:
    Stree()
      {m_root=NULL;}
    bool insert(string origin, string destination, int distance);
    Node *find_node(string origin, Node *cur_node);
    bool lookup(string target, string &parent, int &parent_distance, 
                string &left_child, int &left_child_distance, 
                string &right_child, int &right_child_distance);
    int distance(string origin, string destination);
    bool path(string origin, string destination, vector <string> &path);
    bool remove(string target);
    Node *see(Node *cur_node);
    void seetree();
    ~Stree()
      {delete m_root;}
    
};

#endif
