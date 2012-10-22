//Calc.cpp
//Ace Elberling
//Elberling

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
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
    char oper, num[256], temp[256];
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
      else if (isalpha(cin.peek()))
        error();
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
            value = pow(left,right);
            stack.push(value);
            break;
          case '.':
            if(ispunct(cin.peek()))
              break;
            cin>>num;
            strcpy(temp,".");
            strcat(temp,num);
            stack.push(atof(temp));
            break;
          default:
            error();
            break;
          
        }
      }
      
    }
    int i = 0;
    // as long as the stack is not empty, pop numbers and print them
    while (!stack.empty())
    {
      
      
      if(i>0)
        error();
      else
      {
        value = stack.pop();
        i++;
      }
    }
    
    cout << value << endl;

    return 0;
}
