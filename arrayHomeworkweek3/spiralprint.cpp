#include<iostream>
#include<vector>

using namespace std;

vector<int> spiralPrint(vector<vector<int>> matrix)
{
    vector<int> ans;
    int n = matrix.size();
    int m = matrix[0].size();
    int total =m*n;

    int startingrow = 0;
    int endingrow = n-1;
    int startingcol = 0;
    int endingcol = m-1;

    int count =0;
    
    while(count<total)
    {
        //starting row
        for( int i = startingcol;i<=endingcol&&count<total;i++)
        {
            ans.push_back(matrix[startingrow][i]);
            count++;
        }
        startingrow++;


        //ending col
        for( int i = startingrow;i<=endingrow&&count<total;i++)
        {
            ans.push_back(matrix[i][endingcol]);
            count++;
        }
        endingcol--;
        

        //ending row
        for( int i = endingcol;i>=startingcol&&count<total;i--)
        {
            ans.push_back(matrix[endingrow][i]);
            count++;
        }
        endingrow--;

        //starting col
        for( int i = endingrow;i>=startingrow&&count<total;i--)
        {
            
            ans.push_back(matrix[i][startingcol]);
            count++;
        }
        startingcol++;

        

    }

    
    return ans;
}

int main()
{
    vector<vector<int>> arr{
        {1,2,3},
        {4,5,6},
        {7,8,9}

    };

    vector<int> answer =spiralPrint(arr);

    for(int i=0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }

    return 0;
}