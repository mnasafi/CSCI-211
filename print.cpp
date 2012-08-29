//Ace Elberling CSCI-211  8/27/2012
//this program repeats "hello" an amount of times choosen by the user


#include <iostream>
using namespace std;

int value1;

main()
{
  cout<<"Enter a number: ";
  cin>>value1;
  
  for(int i=0; i<value1; i++)
    cout<<i<< " hello\n";


  return 0;
  
}


