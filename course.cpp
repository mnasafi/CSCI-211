//course.cpp
//elberling, Ace
//elberling

#include "course.h"
#include <iostream>
#include <string>

void Course::print(void)
{
  cout<<dept<<" "<<number<<" at "<<time<<endl;
}
    
    
Course::Course(string d, int n, int t) : dept(d), number(n), time(t)
{
}  

