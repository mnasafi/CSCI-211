//cust.h
//Ace Elberling
//Elberling

#ifndef _CUST_H_
#define _CUST_H_

#include<iostream>
#include<string>
using namespace std;

class Cust
{
  private:
    string name, type;
    int a_time, items;
    
  public:
    void print(void);
    Cust(string n,string t,int a,int i) : name(n), type(t), a_time(a), items(i){}
    bool arrival(Cust *cust);
    bool arrival_eq(Cust *cust);
    bool is_time(int time);
    void entered(ostream & os, int clock);
    void done_shop(ostream & os, int clock);
    void checkout(ostream & os, int clock, int checker);
    void leaving(ostream & os, int clock, int checker, int cash);
};

#endif
