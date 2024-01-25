#include <iostream>
#include <cctype>
#include <string>
#include "compare.h"

using namespace std;

int main()
{
    int comp;
    string user_sent1,
           user_sent2;
    
    //asks for user inputs
    cout << "Enter a sentence: ";
    getline(cin, user_sent1);

    cout << "Enter another sentence: ";
    getline(cin, user_sent2);

    //calls function
    comp = strcmp_case_insensitive (user_sent1, user_sent2);

    //prints message to user
    cout << "The comparison of " << user_sent1 << " and " << user_sent2 
         << " returns " << comp << "." << endl;

}























/*#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    string first_string, 
           second_string;
    
    cout << "Enter first string: \n";
    cin >> first_string;

    cout << "Enter second string: \n";
    cin >> second_string;

    if (first_string < second_string)
    {
        cout << "-1";
    }

    else if (first_string == second_string)
    {
        cout << "0";
    }

    else if (first_string > second_string)
    {
        cout << "1";
    }

    else
    {
        cout << "invalid input";
    }
};
*/
