#include <iostream>
#include <cctype>
#include <string>
#include "compare.h"

using namespace std;

int main()
{
    string user_sent1,
           user_sent2;
    
    //asks for user inputs
    cout << "Enter a sentence: ";
    getline(cin, user_sent1);

    cout << "Enter another sentence: ";
    getline(cin, user_sent2);

    //prints message to user

    // sentence 1 and 2
    cout << "The comparison of " << user_sent1 << " and " << user_sent2 
         << " returns " << strcmp_case_insensitive (user_sent1, user_sent2)
         << "." << endl;

    // sentence 1 and 1
    cout << "The comparison of " << user_sent1 << " and " << user_sent1 
         << " returns " << strcmp_case_insensitive (user_sent1, user_sent1)
         << "." << endl;

    // sentence 2 and 1
    cout << "The comparison of " << user_sent2 << " and " << user_sent1 
         << " returns " << strcmp_case_insensitive (user_sent2, user_sent1)
         << "." << endl;

    // sentence 2 and 2
    cout << "The comparison of " << user_sent2 << " and " << user_sent2 
         << " returns " << strcmp_case_insensitive (user_sent2, user_sent2)
         << "." << endl;

}
