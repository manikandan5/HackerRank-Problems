#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int count;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        string temp;
        cin >> n;
        temp = std::to_string(n);
        count = 0;
        for(int i=0; i<temp.length(); i++)
        {
            if(temp[i] != '0' && (n%(temp[i]-'0')==0))
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

