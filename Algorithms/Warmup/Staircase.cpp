/*
 Consider a staircase of size :
 
 #
 ##
 ###
 ####
 Observe that its base and height are both equal to , and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.
 
 Write a program that prints a staircase of size .
 
 Input Format
 
 A single integer, , denoting the size of the staircase.
 
 Output Format
 
 Print a staircase of size  using # symbols and spaces.
 
 Note: The last line must have  spaces in it.
 
 Sample Input
 
 6
 Sample Output
 
 #
 ##
 ###
 ####
 #####
 ######
 Explanation
 
 The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of .
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
    for(int i=n-1; i >=0; i--)
    {
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }
        for(int j=0; j < n-i; j++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }
    return 0;
}

