#include <iostream>
#include "stack/stack.h"

using namespace  std;

int main() {
    unList<int> foo;
    foo.pushBegin(1);
    foo.pushBegin(2);
    cout << foo.getTop() << ' ' << foo.getEnd() << endl;
    cout << foo.size() << endl;
    return 0;
}
