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

//display 1 
  for(int row=large; 0<row; row--)//row
    {
      for(int col=0; numbers[col]; col++)//colum
        {
        if(row<=numbers[col])
          cout<<"*";
        else
          cout<<" ";
        }
      cout<<endl;
    }

  cout<<endl;
//display 2 - 1 upside down
  for(int row=0; large>row; row++)//row
    {
      for(int col=0; numbers[col]; col++)//colum
        {
        if(row<numbers[col])
          cout<<"*";
        else
          cout<<" ";
        }
      cout<<endl;
    }

  cout<<endl;

//display 3, side left to right
  for(int row=0; numbers[row]>0; row++)
    {
      for(int col=0; numbers[row]>col; col++)//outputs * based on number
        cout<<"*";
      cout<<endl;
    }
  
  cout<<endl;

//display 4, side right to left
  for(int row=0; numbers[row]>0; row++)
    {
      for(int col=large; 0<col; col--)
        {
        if(col<=numbers[row])
          cout<<"*";
        else
          cout<<" ";
        }
      cout<<endl;
    }
  
  cout<<endl;



  return 0;  
}


