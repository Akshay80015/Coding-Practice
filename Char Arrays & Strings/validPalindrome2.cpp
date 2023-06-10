/*
Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

 bool checkPlaindrome(string s, int i , int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
            i++,j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        
        for(int i =0,j=s.length()-1;i<=j;i++,j--)
        {
            if(s[i]!=s[j])
                {
                   return (checkPlaindrome(s, i+1, j)||checkPlaindrome(s,i,j-1));
                }
        }
        return true ;
    }

int main()
{
    string S="aba" ;

    cout<<validPalindrome(S);

    return 0;
}