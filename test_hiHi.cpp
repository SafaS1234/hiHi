#include <cassert>
#include <iostream>
#include <cctype>
#include <string>
#include "compare.h"

int main()
{
    string sent1 = "short sentence", 
           sent2 = "longer sentence";

    assert(-1 == strcmp_case_insensitive(sent1,sent2));
    assert(0 == strcmp_case_insensitive(sent1,sent1));
    assert(1 == strcmp_case_insensitive(sent2,sent1));

    cout << "The comparison of " << sent1 << " and " << sent2 
         << " returns " << strcmp_case_insensitive(sent1,sent2) << endl;
    cout << "The comparison of " << sent1 << " and " << sent1 
         << " returns " << strcmp_case_insensitive(sent1,sent1) << endl;
    cout << "The comparison of " << sent2 << " and " << sent1 
         << " returns " << strcmp_case_insensitive(sent2,sent1) << endl;
    cout << "Your tests were successful." << endl;

    return 0;
}
