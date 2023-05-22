#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int maxelement(int a[][2],int r,int c){
    int max= INT_MIN;
    for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            if(a[i][j]>max){
                max= a[i][j];
            }
        }
       
    }
    return max;
}

int minelement(int a[][2],int r,int c){
    int min= INT_MAX;
    for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            if(a[i][j]<min){
                min= a[i][j];
            }
        }
       
    }
    return min;
}


int main()
{
    int a[3][2]{{1,2},{3,4},{5,6}};
    int r=3;
    int c=2;
    cout<<maxelement(a,r,c);
    cout<<endl;
    cout<<minelement(a,r,c);

    return 0;
}