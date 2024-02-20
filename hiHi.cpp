#include "compare.h"
#include "compareSpace.h"
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string user_sent1,
           user_sent2;
    char yn;
    bool space;
    
    //asks and stores the strings
    cout << "Enter a sentence: ";
    getline(cin, user_sent1);

    cout << "Enter another sentence: ";
    getline(cin, user_sent2);

    //asks if the user wants to include spaces
    cout << "Do you want to skip spaces? " << endl;
    cin >> yn;

    while (tolower(yn) != 'y' && tolower(yn) != 'n')
    {
        cout << "Enter either \'y\' or \'n\'";
        cin >> yn;
    }
    if (tolower(yn) == 'y')
    {
        space = true;
    }

    else if (tolower(yn) == 'n')
    {
        space = false;
    }

    //uses case insensitive function to compare strings and print out results
    if (space = false)
    {
        cout << "The comparison of " << user_sent1 << " and " 
             << user_sent2 << " returns " 
             << strcmp_case_insensitive(user_sent1,user_sent2, space) 
             << endl;
        cout << "The comparison of " << user_sent1 << " and " 
             << user_sent1 << " returns " 
             << strcmp_case_insensitive(user_sent1,user_sent1,  space) 
             << endl;
        cout << "The comparison of " << user_sent2 << " and " 
             << user_sent1 << " returns " 
             << strcmp_case_insensitive(user_sent2,user_sent1, space) 
             << endl;
    }

    else if (space = true)
    {
        cout << "The comparison of " << user_sent1 << " and " 
             << user_sent2 << " returns " 
             << strcmp_space(user_sent1,user_sent2, space) << endl;
        cout << "The comparison of " << user_sent1 << " and " 
             << user_sent1 << " returns " 
             << strcmp_space(user_sent1,user_sent1,  space) << endl;
        cout << "The comparison of " << user_sent2 << " and " 
             << user_sent1 << " returns " 
             << strcmp_space(user_sent2,user_sent1, space) << endl;
    }

}
