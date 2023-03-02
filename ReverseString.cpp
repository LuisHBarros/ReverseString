#include <string>
#include <iomanip>
#include <iostream>
#include <cstring>

using namespace std;

string reverseWord(string word)
{
    int len = word.length();
    char char_array[len + 1];

    for (int i = 0; i < len; i++)
    {
        char_array[i] = word[len - 1 - i];
    }
    string result(char_array);

    result[len] = '\0'; // Ultimo elemento nulo

    return result;
}