#include "string.h"
#include <iostream>

using namespace std;

void input(String &string)
{
    const int maxSize = 1000;
    char tmp[maxSize];
    char curSymbol = 0;
    cin.get(curSymbol);
    int size = 0;
    while (curSymbol != '\n')
    {
        tmp[size] = curSymbol;
        size++;
        cin.get(curSymbol);
    }
    string.size = size;
    for (int i = 0; i < size; ++i)
    {
        string.data[i] = tmp[i];
    }
}
