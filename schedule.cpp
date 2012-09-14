//schedule.cpp
//elberling, Ace
//elberling


#include <iostream>
#include "course.h"
using namespace std;

int main()
{
  Course programming("CSCI",211,1000);
  Course english("ENGL",130,1400);
  Course physics("PHYS",204,800);

  programming.print();
  english.print();
  physics.print();

  return 0;  
}


