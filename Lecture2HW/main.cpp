#include "FooString.h"
#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    FooString first(&*str.begin());
    cin >> str;
    FooString second(&*str.begin());
    
    first.compare(second);

    cin.get();
    return 0;
}