#include "string.h"

void clear(String &string)
{
    delete[] string.data;
    string.size = 0;
}
