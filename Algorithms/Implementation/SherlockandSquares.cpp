#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    int count;
    int start,end;
    int l,u,value;
    float fl, fu;
    for(int a0 = 0; a0 < t; a0++){
        cin >> start;
        cin >> end;
        l = sqrt(start);
        u = sqrt(end);
        fl = sqrt(start);
        fu = sqrt(end);
        value = u - l;
        if(u==l)
        {
            if(l*l == start)
            {
                value = 1;
            }
        }
        if((int(fu)-int(fl))==0)
        {
                value = 0;
        }
        if(l*l == start)
        {
                value += 1;
        }
        cout<<value<<endl;
        //cout<<"L "<<l<<endl; 485 516
        //cout<<"U "<<u<<endl; 1 1000
    }
    return 0;
}

