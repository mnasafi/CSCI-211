//Calc.cpp
//Ace Elberling
//Elberling

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <string.h>
using namespace std;
#include "dstack.h"

void error()
{
  cerr<<"Error: Invalid expression.\n";
  exit(1);
}


int main()
{
    double value, left, right, tnum;
    char oper, num[256], temp[256];
    bool full;
    Dstack *stack = new Dstack();

    if(cin.peek() == EOF)
      error();
    // as long as there is input
    while (cin.peek() != EOF)
    {
      if(isdigit(cin.peek()))
      {
        cin>>tnum;
        //cout<<"inside if isdigit tnum ="<<tnum<<endl;
        stack->push(tnum);
      }
      else if (isspace(cin.peek()))
        cin.ignore();
      else if (isalpha(cin.peek()))
        error();
      else if (ispunct(cin.peek()))
      {
        cin>>oper;
        //cout<<"inside else if punct oper ="<<oper<<endl;
        
        switch(oper)
        {
          case '+':
            right = stack->pop(full);
            if(!full)
              error();
            left = stack->pop(full);
            if(!full)
              error();
            value = left + right;
            stack->push(value);
            break;
          case '-':
            right = stack->pop(full);
            if(!full)
              error();
            left = stack->pop(full);
            if(!full)
              error();
           value = left - right;
            //cout<<left<<" - "<<right<<" = "<<value<<endl;
            stack->push(value); 
            break;
          case '*':
            right = stack->pop(full);
            if(!full)
              error();
            left = stack->pop(full);
            if(!full)
              error();
            value = left * right;
            stack->push(value);
            break;
          case '/':
            right = stack->pop(full);
            if(!full)
              error();
            left = stack->pop(full);
            if(!full)
              error();
            if(right == 0)
              error();
            value = left / right;
            stack->push(value);
            break;
          case '^':
            right = stack->pop(full);
            if(!full)
              error();
            left = stack->pop(full);
            if(!full)
              error();
            value = pow(left,right);
            stack->push(value);
            break;
          case '.':
            if(isdigit(cin.peek()))
            {
              cin>>num;
              //cout<<"inside . case, num="<<num<<endl;;
              strcpy(temp,".");
              strcat(temp,num);
              stack->push(atof(temp));
            }
            else if(isspace(cin.peek()))
              error();
            break;
          default:
            error();
            break;
          
        }
      }
      
    }
    int i = 0;
    // as long as the stack is not empty, pop numbers and print them
    while (!stack->empty())
    {
      if(i>0)
        error();
      else
      {
        value = stack->pop(full);
        i++;
      }
    }
    
    cout << value << endl;
    delete stack;
    return 0;
}
