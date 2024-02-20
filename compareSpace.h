#ifndef COMPARESPACE_H_INC
#define COMPARESPACE_H_INC
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

//function to make the strings lowercase and compare them
int strcmp_space (const string& string1, const string& string2,
                             bool spaces)
{
    char word1, word2;
    string string1NoSpace, string2NoSpace;

    //makes user input lowercase
    for (size_t i = 0; i < min(string1.length(),string2.length()); i++)
    {
    //    if (spaces = true)
    //    {
    //         while (i < string1.length() && isspace(string1[i])) 
    //         {
    //             i++;
    //         }
                
    //         while (i < string2.length() && isspace(string2[i])) 
    //         {
    //             i++;
    //         }
    //    }
        
        if (spaces = true)
        {
            if(!isspace(string1[i]))
            {
                string1NoSpace += string1[i];
            }

            if(!isspace(string2[i]))
            {
                string2NoSpace += string2[i];
            }
        }

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

    //compares the strings
    if (string1NoSpace.length() < string2NoSpace.length())
    {
        return -1;
    }

    else if (string1NoSpace.length() > string2NoSpace.length())
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

#endif
