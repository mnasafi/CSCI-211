#include <iostream>
using namespace std;

#include "foo.h"


Foo::Foo(int x, int y)
{
    m_x = x;
    m_y = y;
}

void Foo::print()
{
    cout << "Foo(" << m_x << "," << m_y << ")" << endl;
}
