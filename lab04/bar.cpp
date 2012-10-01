#include <iostream>
using namespace std;

#include "bar.h"


Bar::Bar(int x, int y)
{
    m_x = x;
    m_y = y;
}

void Bar::print()
{
    cout << "Bar(" << m_x << "," << m_y << ")" << endl;
}
