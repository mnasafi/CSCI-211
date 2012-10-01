#include <iostream>
using namespace std;

#include "foo.h"
#include "bar.h"

int main()
{
  Foo *foo = new Foo(1,2);
  Bar *bar = new Bar(3,4);

  foo->print();
  bar->print();
}
