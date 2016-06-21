#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int t;
    int width1=3;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        width1=3;
        cin >> i >> j;
        
        for(int k=i; k<=j; k++)
        {
            if(width1>width[k])
            {
                width1 = width[k];    
            }
        }
        cout<< width1<<endl;
    }
    return 0;
}

