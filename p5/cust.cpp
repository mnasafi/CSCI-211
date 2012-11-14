//cust.cpp
//Ace Elberling
//Elberling

#include<iostream>
#include<string>
#include "cust.h"

void Cust::print(void)
{
  cout<<name<<" "<<type<<" "<<a_time<<" "<<items<<endl;
}

bool Cust::arrival(Cust *other)
{
  return a_time > other->a_time;
}

