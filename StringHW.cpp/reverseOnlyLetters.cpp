/*Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.



Example 1:

Input: s = "ab-cd"
Output: "dc-ba"
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <string.h>

using namespace std;

bool isEnglishlettr(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    else
        return false;
}
string reverseOnlyLetters(string s)
{
    int i = 0;
    int j = s.size() - 1;

    while (i < j)
    {
        if (!isEnglishlettr(s[i]))
        {

            i++;
        }
        else if (!isEnglishlettr(s[j]))
        {
            j--;
        }
        else
        {
            swap(s[i], s[j]);
            i++, j--;
        }
    }
    return s;
}

int main()
{
    string s = "ab-cd";
    cout<<reverseOnlyLetters(s);

    return 0;
}