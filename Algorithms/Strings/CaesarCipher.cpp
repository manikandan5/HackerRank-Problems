#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    int temp;
    cin >> k;
    for(int i=0; i<n; i++)
    {
        if((int)s[i]>=97 && (int)s[i]<=122)
        {
            temp = (int)s[i] + k;
            while(temp >122)
            {
                temp = temp - 26;
            }
            s[i] = (char) temp;
        }
        else if((int)s[i]>=65 && (int)s[i]<=90)
        {
            temp = (int)s[i] + k;
            while(temp >90)
            {
                temp = temp - 26;
            }
            s[i] = (char) temp;
        }

    }
    cout<<s;

    return 0;
}
