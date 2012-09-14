//course.h
//elberling, Ace
//elberling

#ifndef _COURSE_H_
#define _COURSE_H_

#include <iostream>
#include <string>

using namespace std;

class Course
{
  private:
    int number, time;
    string dept;
    
  public:
    void print(void);
    Course(string d, int n, int t);
  
};

#endif
