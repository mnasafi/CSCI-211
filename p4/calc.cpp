//Calc.cpp
//Ace Elberling
//Elberling

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include "dstack.h"

void error()
{
  cerr<<"Error: Invalid expression.\n";
  exit(1);
}


int main()
{
    double value;
    char oper;
    Dstack stack;

    // as long as there is input
    while (cin.peek() != EOF)
    {
      if(isdigit(cin.peek()))
      {
        cin>>value;
        stack.push(value);
      }
      else if (isspace(cin.peek()))
        cin.ignore();
      else if (ispunct(cin.peek()))
      {
        cin>>oper;
        switch(oper)
        {
          case '+':
            break;
          case '-':
            break;
          case '*':
            break;
          case '/':
            break;
          default:
            error();
            break;
          
        }
      }
      
    }  
    // as long as the stack is not empty, pop numbers and print them
    while (!stack.empty())
      cout << stack.pop() << endl;

    return 0;
}
