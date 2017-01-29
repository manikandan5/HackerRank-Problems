#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    int count, wrap;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        count = int(floor(n/c));
        wrap = count;
        while(wrap>=m)
        {
            wrap -= m;
            count++;
            wrap++;
        }
        cout<<count<<endl;
        
    }
    return 0;
}

