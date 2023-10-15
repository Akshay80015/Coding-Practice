#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

void findKey(string arr, char key, int s, int e)
{
    if(s>e)
        return;
    if(key == arr[s])
       { cout<<"found at "<<s<<endl;
       return ;
        }
    return findKey(arr,key,s+1,e);

}

int main()
{
    string arr= "Akshay";
    char key = 'k';
    findKey(arr,key,0,arr.size()-1);
    return 0;
}