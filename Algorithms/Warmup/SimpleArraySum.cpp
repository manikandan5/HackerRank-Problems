/*
Given an array of  integers, can you find the sum of its elements?

Input Format

The first line contains an integer, , denoting the size of the array. 
The second line contains  space-separated integers representing the array's elements.

Output Format

Print the sum of the array's elements as a single integer.

Sample Input

6
1 2 3 4 10 11
Sample Output

31
Explanation

We print the sum of the array's elements, which is: .
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
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
       cin >> arr[arr_i];
    }

    int total = 0;      //Declare a total variable and initialise it to 0
    
    for(int i=0; i < n; i++)    // Iterating through each element
    {
        total += arr[i];        // Add each element in the array to the total
    }
    
    cout<<total;
    
    return 0;
}

