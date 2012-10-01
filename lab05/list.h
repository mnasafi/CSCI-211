//list.h
//Ace Elberling
//elberling

// demonstrate a simple linked-list of integers
#ifndef LIST_H
#define LIST_H

class List
{
    public:
        List();
        ~List();
        void insert(int value); // insert at beginning of list
        void print();
        int sum();
        void insert_at_end(int value);
    private:
        class Node
        {
            public:
                // small functions can be inserted into the class definition
                // don't put large functions in the class definition
                Node(int value, Node *next)
                {m_value = value; m_next = next;}
                int m_value;
                Node *m_next;
        };
        Node *m_head;
};

#endif
