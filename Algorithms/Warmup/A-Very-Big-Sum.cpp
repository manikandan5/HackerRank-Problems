/*
 
 You are given an array of integers of size N. You need to print the sum of the elements in the array, keeping in mind that some of those integers may be quite large.
 
 Input
 
 The first line of the input consists of an integer N. The next line contains N space-separated integers contained in the array.
 
 
 Sample Input
 5
 1000000001 1000000002 1000000003 1000000004 1000000005
 
 Output
 Print a single value equal to the sum of the elements in the array. In the above sample, you would print .
 
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
    vector<int> arr(n);
    
    long long int total=0;
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
       cin >> arr[arr_i];
       total += arr[arr_i];
    }
    cout<<total;
    return 0;
}

