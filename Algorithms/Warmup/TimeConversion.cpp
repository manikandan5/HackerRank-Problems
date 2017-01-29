/*
 
 Given a time in AM/PM format, convert it to military (-hour) time.
 
 Note: Midnight is  on a -hour clock, and  on a -hour clock. Noon is  on a -hour clock, and  on a -hour clock.
 
 Input Format
 
 A single string containing a time in -hour clock format (i.e.:  or ), where .
 
 Output Format
 
 Convert and print the given time in -hour format, where .
 
 Sample Input
 
 07:05:45PM
 Sample Output
 
 19:05:45
 
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main(){
    string time;
    cin >> time;
    int h = 0,m = 0,s = 0;
    s = (time[6] - '0') * 10 + time[7] - '0';
    m = (time[3] - '0') * 10 + time[4] - '0';
    h = (time[0] - '0') * 10 + time[1] - '0';
    
    if(time[8]=='P')
    {
        if(h != 12)
        {
            h = h+12;    
        }
    }
    else
    {
        if(h == 12)
        {
            h = 0;
        }
    }
    
    if(h<10)
    {
        cout<<0;
    }
    cout<<h<<":";
    if(m<10)
    {
        cout<<0;
    }
    cout<<m<<":";
    if(s<10)
    {
        cout<<0;
    }
    cout<<s;
    
    return 0;
}

