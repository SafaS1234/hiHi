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
    size_t userMax;

    //asks and stores the strings
    cout << "Enter a sentence: ";
    getline(cin, user_sent1);

    cout << "Enter another sentence: ";
    getline(cin, user_sent2);

    //asks if the user wants to include spaces
    cout << "Do you want to skip spaces? " << endl;
    cin >> yn;

    //asks if they want a max
    cout << "Enter the max number of characters you want to compare ";
    cout << "(0 is default): "; 
    cin >> userMax;

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
    if (space == false)
    {
        cout << "The comparison of " << user_sent1 << " and " 
             << user_sent2 << "at a max of " << userMax << " returns " 
             << strcmp_case_insensitive(user_sent1,user_sent2,space, 
                userMax) << endl;

        cout << "The comparison of " << user_sent1 << " and " 
             << user_sent1 << "at a max of " << userMax << " returns " 
             << strcmp_case_insensitive(user_sent1,user_sent1,space, 
                userMax) << endl;

        cout << "The comparison of " << user_sent2 << " and " 
             << user_sent1 << "at a max of " << userMax << " returns " 
             << strcmp_case_insensitive(user_sent2,user_sent1,space, 
                userMax) << endl;

    }

    else if (space == true)
    {
        cout << "The comparison of " << user_sent1 << " and " 
             << user_sent2 << " returns " 
             << strcmp_space(user_sent1,user_sent2, space, 
                userMax) << endl;
        cout << "The comparison of " << user_sent1 << " and " 
             << user_sent1 << " returns " 
             << strcmp_space(user_sent1,user_sent1,  space, 
                userMax) << endl;
        cout << "The comparison of " << user_sent2 << " and " 
             << user_sent1 << " returns " 
             << strcmp_space(user_sent2,user_sent1, space, 
                userMax) << endl;
    }

}
