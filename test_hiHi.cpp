#include "compare.h"
#include "compareSpace.h"
#include <cassert>
#include <iostream>
#include <cctype>
#include <string>

int main()
{
    string sent1 = "short sentence", 
           sent2 = "longer sentence";
    bool space;

    assert(-1 == strcmp_case_insensitive(sent1,sent2,space));
    assert(0 == strcmp_case_insensitive(sent1,sent1,space));
    assert(1 == strcmp_case_insensitive(sent2,sent1,space));

    cout << "The comparison of " << sent1 << " and " << sent2 
         << " returns " << strcmp_case_insensitive(sent1,sent2,space) 
         << endl;
    cout << "The comparison of " << sent1 << " and " << sent1 
         << " returns " << strcmp_case_insensitive(sent1,sent1,space) 
         << endl;
    cout << "The comparison of " << sent2 << " and " << sent1 
         << " returns " << strcmp_case_insensitive(sent2,sent1,space) 
         << endl;

    return 0;
}
