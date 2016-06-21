#!/bin/python3

import sys

def findNum(n):
    if n<3:
        return -1
    if n%3 == 0:
        return "5"*n
    if n == 5:
        return "3"*5
    for i in range(int(n/3),-1,-1):
        if ((n - (i*3))% 5 == 0 ):
            return "5"*(i*3)+ "3"* (int((n - (i*3))))
    return -1

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    print(findNum(n))
    
    
    
