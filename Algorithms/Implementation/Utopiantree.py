#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    if n%2 == 0:
        odd = n/2
        even = n/2
    else:
        odd = (n-1)/2
        even = (n+1)/2
    value = 1 + odd;
    for i in range(int(even+1)):
        value += (pow(2,i)-1)
    print(int(value))
    

