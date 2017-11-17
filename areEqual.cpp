#include "string.h"
#include <iostream>

using namespace std;

bool areEqual(String &string1, String &string2) {
    if (string1.size != string2.size)
        return false;

    for (int i = 0; i < string1.size; ++i) {
        if (string1.data[i] != string2.data[i])
            return false;
    }
    return true;
}
