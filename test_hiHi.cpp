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
    size_t userMax;

    //test cases for compare.h library
    assert(-1 == strcmp_case_insensitive(sent1,sent2,space, userMax));
    assert(0 == strcmp_case_insensitive(sent1,sent1,space, userMax));
    assert(1 == strcmp_case_insensitive(sent2,sent1,space, userMax));

    cout << "The comparison of " << sent1 << " and " << sent2 
         << "at a max of " << userMax << " returns " 
         << strcmp_case_insensitive(sent1,sent2,space, userMax) << endl;


    cout << "The comparison of " << sent1 << " and " << sent1 
         << "at a max of " << userMax << " returns " 
         << strcmp_case_insensitive(sent1,sent1,space, userMax) << endl;


    cout << "The comparison of " << sent2 << " and " << sent1 
         << "at a max of " << userMax << " returns " 
         << strcmp_case_insensitive(sent2,sent1,space, userMax) << endl;

    //test cases for compareSpace.h library
    assert(-1 == strcmp_space(sent1,sent2,space, userMax));
    assert(0 == strcmp_space(sent1,sent1,space, userMax));
    assert(1 == strcmp_space(sent2,sent1,space, userMax));

    cout << "The comparison of " << sent1 << " and " << sent2 
         << "at a max of " << userMax << " returns " 
         << strcmp_space(sent1,sent2,space, userMax) << endl;


    cout << "The comparison of " << sent1 << " and " << sent1 
         << "at a max of " << userMax << " returns " 
         << strcmp_space(sent1,sent1,space, userMax) << endl;


    cout << "The comparison of " << sent2 << " and " << sent1 
         << "at a max of " << userMax << " returns " 
         << strcmp_space(sent2,sent1,space, userMax) << endl;

    return 0;
}
