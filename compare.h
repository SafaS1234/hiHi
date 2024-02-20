#ifndef COMPARE_H_INC
#define COMPARE_H_INC
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

//function to make the strings lowercase and compare them
int strcmp_case_insensitive (const string& string1, const string& string2, 
                            bool space = false, 
                            size_t userMax = string::npos)
{
    char word1, word2;
    string string1NoSpace, string2NoSpace;

    //makes user input lowercase
    for (size_t i = 0; i < min(min(string1.length(),string2.length()), 
         userMax); i++)
    {

        word1 = tolower(string1[i]);
        word2 = tolower(string2[i]);

        if (word1 < word2)
        {
            return -1;
        }

        else if (word2 < word1)
        {
            return 1;
        }
    }

    if (userMax != string::npos && userMax < min(string1.length(), 
        string2.length()))
    {
        if (tolower(string1[userMax]) < tolower(string2[userMax]))
        {
            return -1;
        }
        else
        {
            if (tolower(string2[userMax]) < tolower(string1[userMax]))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }

    else
    {
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
}

#endif
