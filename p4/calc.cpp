//Calc.cpp
//Ace Elberling
//Elberling

//********lab 14*********

#include <iostream>
using namespace std;
#include "dstack.h"

int main()
{
    double value;
    Dstack stack;

    // as long as there is input
    while (cin >> value)
      stack.push(value);
      
    // as long as the stack is not empty, pop numbers and print them
    while (!stack.empty())
      cout << stack.pop() << endl;

    return 0;
}
