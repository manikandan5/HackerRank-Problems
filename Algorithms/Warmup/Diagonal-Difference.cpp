/*
 
 Given a square matrix of size N x N, calculate the absolute difference between the sums of its diagonals.
 
 Input Format
 
 The first line contains a single integer, N. The next N lines denote the matrix's rows, with each line containing N space-separated integers describing the columns.
 
 Output Format
 
 Print the absolute difference between the two sums of the matrix's diagonals as a single integer.
 
 Sample Input
 
 3
 11 2 4
 4 5 6
 10 8 -12
 Sample Output
 
 15
 Explanation
 
 The primary diagonal is:
 11
 5
 -12
 
 Sum across the primary diagonal: 11 + 5 - 12 = 4
 
 The secondary diagonal is:
 4
 5
 10
 Sum across the secondary diagonal: 4 + 5 + 10 = 19
 Difference: |4 - 19| = 15
 
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    int diag1=0;
    int diag2=0;
    for(int a_i = 0;a_i < n;a_i++)
    {
       for(int a_j = 0;a_j < n;a_j++)
       {
          cin >> a[a_i][a_j];
          if(a_i == a_j)
          {
              diag1 += a[a_i][a_j];    
          }
          if((a_i + a_j) == (n-1))
          {
              diag2 += a[a_i][a_j];
          }
       }
    }
    int total = diag2- diag1;
    if(total<0)
    {
        total = -total;
    }
    cout<<total;
    return 0;
}

