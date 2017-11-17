#include "String.h"

void cont(String &string, String &addition) {
	int newSize = string.size + addition.size;
	char *newData = new char[newSize];

	for (int i = 0; i < string.size; ++i)
		newData[i] = string.data[i];

	for (int i = string.size; i < newSize; ++i)
		newData[i] = addition.data[i - string.size];

	delete[] string.data;
	string.data = newData;
}
