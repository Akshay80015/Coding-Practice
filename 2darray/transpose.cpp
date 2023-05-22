#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void trans(int a[][2], int r,int c){
    int a2[2][2];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        a2[i][j]=a[j][i];
            
        }
        
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a2[i][j];
        }
        cout<<endl;
    }
    
    
}

int main()
{
    int a[2][2]={{1,2},{4,5}};
    int r=2;
    int c=2;
    trans(a,r,c);
    return 0;
}