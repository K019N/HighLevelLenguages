#include "DynamicMassive.h"
#include <iostream>

using namespace std;

DynamicArray::DynamicArray(int setLength)
{
    numbers = new int[length] {};
    length = setLength;
    pointer = 0;
}

DynamicArray::DynamicArray(DynamicArray &a)
{
    this->length = a.length;
    numbers = new int[length] {};
    for (int i = 0; i < length; ++i)
    {
        this->numbers[i] = a.numbers[i];
    }
}

DynamicArray::~DynamicArray()
{
    if (numbers) delete[] numbers;
    cout << "deleted\n";
}

void DynamicArray::print()
{
    for(int i = 0; i < length; ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << "\n";
}

void DynamicArray::setValue(int value, int position)
{
    if (value < 101 && value > -101 && position > -1 && position < length)
    {
        numbers[position] = value;
    }
    else
    {
        cout << "Try another value\n";
    }
}

int DynamicArray::getValue(int position)
{
    if (position > -1 && position < length)
    {
        return *(numbers + position);
    }
    throw invalid_argument("received negative value");
    
}

void DynamicArray::pushBack(int value)
{
    if (value < 101 && value > -101)
    {
        int *newNumbers = new int[length + 1] {};
        for (int i = 0; i < length; ++i)
        {
            newNumbers[i] = numbers[i];
        }
        newNumbers[length] = value;
        delete [] numbers;
        length++;
        numbers = newNumbers;
    }
    else
    {
        cout << "Try another value\n";
    }
}

DynamicArray DynamicArray::operator-(DynamicArray &a)
{
    DynamicArray res(a);
    if (a.length == this->length)
    {
        for (int i = 0; i < length; ++i)
        {
            res.numbers[i] -= a.numbers[i];
        }
    }
    return res;
}

DynamicArray DynamicArray::operator+(DynamicArray &a)
{
    DynamicArray res(0);
    if (a.length == this->length)
    {
        for(int i = 0; i < length; ++i)
        {
            res.numbers[i] -= a.numbers[i];
        }
    }
    return res;
}
