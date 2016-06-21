#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){
    string s;
    cin >> s;
    float len = s.length();
    float col = ceil(sqrt(len));
    int row = ceil(len/col);
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            if(i+(j*col)<len)
            {
                cout<<s[i+(j*col)];
            }
        }
        cout<<" ";
    }
    return 0;
}

