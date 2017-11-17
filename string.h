#pragma once

const int firstSize = 20;

struct String
{
    char *data = new char[firstSize];
    int size = firstSize;
};

bool areEqual(String &string1, String &string2);

void input(String &string);

void output(String &string);

void clone(String &string);

void cont(String &string);

String* getSubstring(String &string, int first, int last);

void clear(String &string);
