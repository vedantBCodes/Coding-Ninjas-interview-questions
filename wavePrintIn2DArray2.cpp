/*
For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first row start to end, next row end to start, and so on.

For eg:-

The sine wave for the matrix:-
1 2 3
4 5 6
7 8 9
will be [1,2,3,6,5,4,7,8,9].
*/
#include <iostream>
using namespace std;

int main() 
{
    int row=3,col=3;
    int arr[row][col]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<col;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<row;j++)
           {
               cout<<arr[i][j]<<" ";
           }
        }
        else
        {
            for(int k=(row-1);k>=0;k--)
            {
                cout<<arr[i][k]<<" ";
            }
        }
    }
    
    return 0;
}