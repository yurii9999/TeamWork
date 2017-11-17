#include "String.h"

// [first, last)
String getSubstring(String &string, int first, int last) {
	int newSize = last - first;
	char* subData = new char[newSize];

	for (int i = first; i < last; ++i) 
		subData[i - first] = string.data[i];

	String *result = new String;
	result->data = subData;
	result->size = newSize;

	return *result;
}
