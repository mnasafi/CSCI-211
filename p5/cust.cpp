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
  //cout<<"in arrival\n current cust="<<name<<" current time="<<a_time<<endl<<"other cust="<<other->name<<" other time="<<other->a_time<<endl;

  
  return a_time > other->a_time;
}

bool Cust::arrival_eq(Cust *other)
{
  return a_time == other->a_time;
}

void Cust::entered(ostream & os, int clock)
{
  assert(clock == a_time);
  os << clock <<": "<<name<<" entered store\n";
  a_time = a_time + items;
}

void Cust::done_shop(ostream & os, int clock)
{
  assert(clock == a_time);
  os << clock <<": "<<name<<" done shopping\n";
  if(type == "shopper")
    a_time = a_time + (2 * items);
  else
    a_time = a_time + 2;
}

void Cust::checkout(ostream & os, int clock, int checker)
{
  os << clock <<": "<<name<<" started checkout with checker "<<checker<<endl;
}

void Cust::leaving(ostream & os, int clock,int checker, int &cash)
{
  assert(clock == a_time);
  os << clock <<": "<<name;
  if(type == "robber")
  {
    cout<<"robber cash="<<cash<<endl;
    os<<"stole $"<<cash<<" and "<<items;
    if(items == 1)
      os<<" item ";
    else
      os<<" items ";
    os<<"from checker "<<checker<<endl;
    cash = 0;
    cout<<"after:"<<cash<<endl;
  }
  else if(type == "shopper")
  {
    os<<" paid $"<<(items * 3)<<" for "<<items;
    if(items == 1)
      os<<" item ";
    else
      os<<" items ";
    os<<"to checker "<<checker<<endl;
    cash = cash + (items * 3);
  }
  else
  {
    cout<<name<<" broke something\n";
  os<<" store broke\n";
  }
}

bool Cust::is_time(int time)
{
  cout<<a_time<<" "<<time<<endl;
  if(a_time == time)
    return true;
  else
    return false;}




