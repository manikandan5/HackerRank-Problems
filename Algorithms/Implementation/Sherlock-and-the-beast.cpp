#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string findNum(int n)
{   
    string value="";
    if(n<3)
    {
        return "-1";
    }
    if(n%3==0)
    {
        for(int i=0;i<n;i++)
        {
            value = value+"5"; 
        }
        return value;
    }
    for(int i=n/3; i>=0; i--)
    {
        if((n - (i*3))%5 == 0)
        {
            for(int j=0; j<i; j++)
            {
                value = value +"555";
            }
            for(int j=0; j<((n-(i*3))/5);j++)
            {
                value = value +"33333"; 
            }
            return value;
        }
    }
    return "-1";
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        
        cout<<findNum(n)<<endl;
        
    }
    return 0;
}

