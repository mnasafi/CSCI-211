//Ace Elberling CSCI-211  8/27/2012
//this program adds two numbers input by the user


#include <iostream>
#include "video.h"
using namespace std;

int main()
{
  Video video1("Title One", "www.youtube.com/one", "Comment ONE", 1.1, 1);
  Video video2("Title Two", "www.youtube.com/two", "Comment TWO", 2.2, 2);

  video1.print();
  video2.print();
  return 0;
  
}


