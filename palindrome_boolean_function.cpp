/*This was a homework assignment where the task was to build a function to determine if a string is a palindrome.*/

#include <iostream>
#include <string>

using namespace std;

bool ispalindrome(const string& s)

{
    string str = s;
    int l = 0;
    int r = str.length() - 1;

    for (int i = 0; i <= r; i++)
        str[i] = toupper(str[i]);


    while (l <= r) {

        if (!(str[l] >= 'A' && str[l] <= 'Z'))
            ++l; 

        else if (!(str[r] >= 'A' && str[l] <= 'Z'))
            --r; 

        else if (str[l] == str[r])
            ++l, --r;


        else
            return false;
    }
    return true;
}