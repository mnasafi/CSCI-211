//main.cpp
//Ace Elberling
//elberling


#include <iostream>
using namespace std;
#include "list.h"

int main()
{
  // instantiate a List class (the constructor takes NO arguments)
  List list;
  int num;
  
  //input
  while(cin>>num)
    list.insert_at_end(num);
  
  //print list and sum
  list.print();
  cout<<"sum = "<<list.sum()<<endl;
  
  return 0;
}
