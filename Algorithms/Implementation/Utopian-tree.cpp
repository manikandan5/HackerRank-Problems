#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    int odd,even,value;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        if(n%2==0)
        {
            odd = n/2;
            even = n/2;
        }
        else
        {
            odd = (n-1)/2;
            even = (n+1)/2;
        }
        value = 1+ (1 * odd);
        for(int i=1; i<=even; i++)
        {
            value = value + (pow(2,i)-1);
        }
        cout<<value<<endl;
    }
    
    return 0;
}

