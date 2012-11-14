//cust.cpp
//Ace Elberling
//Elberling

#include<iostream>
#include<string>
#include<assert.h>
#include "cust.h"

void Cust::print(void)
{
  cout<<name<<" "<<type<<" "<<a_time<<" "<<items<<endl;
}

bool Cust::arrival(Cust *other)
{
  return a_time > other->a_time;
}


void Cust::entered(ostream & os, int clock)
{
  assert(clock == a_time);
  os << clock <<": "<<name<<" entered store\n";
}

void Cust::done_shop(ostream & os, int clock)
{
  assert(clock == a_time);
  os << clock <<": "<<name<<" done shopping\n";
}

void Cust::checkout(ostream & os, int clock, int checker)
{
  assert(clock == a_time);
  os << clock <<": "<<name<<" started checkout with checker "<<checker<<endl;
}

void Cust::leaving(ostream & os, int clock,int checker, int cash)
{
  assert(clock == a_time);
  os << clock <<": "<<name;
  if(type == "robber")
  {
    os<<"stole $"<<cash<<" and "<<items;
    if(items == 1)
      os<<" item ";
    else
      os<<" items ";
    os<<"from checker "<<checker<<endl;
  }
  os<<" entered store\n";
  
}

