String* clone(String &string)
{
    String* newString = new String;
    newString->size = string.size;
    newString->data = new char[newString->size];

    for (int i = 0; i < newString->size; i++)
    {
        newString->data[i] = string.data[i];
    }

    return newString;
}
