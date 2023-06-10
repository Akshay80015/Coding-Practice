/*

1910. Remove All Occurrences of a Substring
Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.

A substring is a contiguous sequence of characters in a string.
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

 string removeOccurrences(string s, string part) {
        int i =0;
        int lofpart = part.length();
        while(i<s.length())
        {
            int stpos = s.find(part);
            if(stpos!=string::npos)
            {
                s.erase(stpos,lofpart);
                i = 0;
                continue;
            }
            i++;

        }
        return s;
    }

int main()
{
    string s = "daabcbaabcbc";
    string part ="abc";

    cout<<removeOccurrences(s,part);
    
    return 0;
}