#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n = (input().strip())
    digit = [int(d) for d in n]
    n = int(n)
    count = 0
    for d in digit:
        if d!=0 and n%d==0:
            count+=1
    print(count)
