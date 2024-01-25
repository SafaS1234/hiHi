#ifndef COMPARE_H_INC
#define COMPARE_H_INC
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

//function to make the strings lowercase and compare them
int strcmp_case_insensitive (const string& string1, const string& string2)
{
    char word1, word2;

    //makes user input lowercase
    for (size_t i = 0; i < min(string1.length(),string2.length()); ++i)
    {
        word1 = tolower(string1[i]);
        word2 = tolower(string2[i]);
    }

    //compares the strings
    if (string1.length() < string2.length())
    {
        return -1;
    }

    else if (string1.length() > string2.length())
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

#endif
