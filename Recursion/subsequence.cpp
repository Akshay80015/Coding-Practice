#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

void subsequence(string str, string output, int i)
{
    if(i>=str.size())
       { 
        cout <<output<<" ";
        return;
       }
    
    //exclude
    subsequence(str,output,i+1);

    //include
    subsequence(str, output+str[i],i+1);

}

int main()
{
    string str = "abc";
    string output = "";
    int i = 0;

    subsequence(str,output,i);



    return 0;
}