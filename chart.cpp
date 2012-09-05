//chart.cpp
//elberling, Ace
//elberling

//Ace Elberling CSCI-211  chart.cpp 9/05/2012
//this program creates a chart based on numbers input by the user


#include <iostream>
using namespace std;

main()
{
  int num=1, numbers[100], large=0;

//input
  for(int i=0; num>0; i++)
    { 
      cin>>num;  //takes numbers from user
      numbers[i] = num;  //shoves number into array of numbers
      if(large<numbers[i])//finds largest number input
        large=numbers[i];
    }
cout<<"graph:\n";
//display 
  for(int row=0; large>row; row++)//row
    {
      for(int col=0; numbers[col]; col++)//colum
        {
        if(row==numbers[col])
          cout<<"*";
        else
          cout<<" ";
        }
        cout<<endl;
    }
/*
//display down, side left to right
  for(int i=0; numbers[i]>0; i++)
    {
      for(int k=0; numbers[i]>k; k++)//outputs * based on number
        cout<<"*";
      cout<<endl;
    }
  
  cout<<endl;
*/

  return 0;
  
}


