i#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n,c,m = input().strip().split(' ')
    n,c,m = [int(n),int(c),int(m)]
    num = int(n/c)
    wrap = num
    while(wrap>=m):
        num +=1
        wrap -= m
        wrap +=1
    print(num)

