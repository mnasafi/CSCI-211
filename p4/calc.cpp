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
    double value, left, right;
    char oper, num[256];
    Dstack stack;

    // as long as there is input
    while (cin.peek() != EOF)
    {
      if(isdigit(cin.peek()))
      {
        cin>>num;
        stack.push(atof(num));
      }
      else if (isspace(cin.peek()))
        cin.ignore();
      else if (ispunct(cin.peek()))
      {
        cin>>oper;
        switch(oper)
        {
          case '+':
            right = stack.pop();
            left = stack.pop();
            value = left + right;
            stack.push(value);
            break;
          case '-':
            right = stack.pop();
            left = stack.pop();
            value = left - right;
            cout<<left<<" - "<<right<<" = "<<value<<endl;
            stack.push(value); 
            break;
          case '*':
            right = stack.pop();
            left = stack.pop();
            value = left * right;
            stack.push(value);
            break;
          case '/':
            right = stack.pop();
            left = stack.pop();
            value = left / right;
            stack.push(value);
            break;
          case '^':
            right = stack.pop();
            left = stack.pop();
            value = left / right;
            stack.push(value);
            
            break;
          default:
            error();
            break;
          
        }
      }
      
    }
    // as long as the stack is not empty, pop numbers and print them
    while (!stack.empty())
    {
      if(stack->m_head->m_next==NULL)
        cout << stack.pop() << endl;
      else
        error();
    }

    return 0;
}
