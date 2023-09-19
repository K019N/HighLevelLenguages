#include "FooString.h"
#include <iostream>

using namespace std;

FooString::FooString(char* tbuf)
{
    size = sizeof(tbuf)/sizeof(*tbuf);
    buf = new char[size];
    for(int i = 0; i < size; ++i)
    {
        buf[i] = tbuf[i];
    }
    cout << "new string created\n";
}

FooString::~FooString()
{
    delete [] buf;
    cout << "String deleted\n";
}

void FooString::show()
{
    for(int i = 0; i < size; ++i)
    {
        cout << buf[i] << " ";
    }
    cout << endl;
}

char FooString::getElem(int pos)
{
    return buf[pos];
}

bool FooString::compare(FooString str)
{
    for(int i = 0; i < size; ++i)
    {
        if(buf[i] != str.buf[i])
        {
            cout << "Strings aren't equal\n";
            return false;
        }
    }
    cout << "Strings are equal\n";
    return true;
}
