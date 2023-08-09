#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>
#include<map>

using namespace std;


bool valid(string s, string t)
{
     if(s.size()!=t.size())
             return false;
        map<char, int> m;
        for(int i =0;i<s.size();i++)
        {

            m[s[i]]++;
        }
        for(int i =0;i<t.size();i++)
        {

            m[t[i]]--;
            if(m[t[i]]<0)
            {
                return false;
            }
           
        }
        return true;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";

    cout<<valid(s,t);
    return 0;
}