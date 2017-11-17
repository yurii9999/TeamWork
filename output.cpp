#include "string.h"
#include <iostream>

void output(String &string)
{
    for (int i = 0; i < string.size; i++)
        std::cout << string.data[i];
}
