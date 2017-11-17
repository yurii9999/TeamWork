#pragma once

const int firstSize = 20;

struct String
{
    char *data = new char[firstSize];
    int size = firstSize;
};
