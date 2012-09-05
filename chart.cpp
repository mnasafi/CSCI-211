//Ace Elberling CSCI-211  chart.cpp 9/05/2012
//this program creates a chart based on numbers input by the user


#include <iostream>
using namespace std;

main()
{
  int numbers[100];

  for(int i=0; numbers[i]<1; i++)
    cin >> numbers[i];
  
  cout<<"numbers recieved:\n";
  for(int i=0; numbers[i]==0;i++)
    cout<<numbers[i]<<" ";

  cout<<endl;

  return 0;
  
}


