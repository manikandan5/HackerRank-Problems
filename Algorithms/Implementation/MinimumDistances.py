#!/bin/python3

import sys


n = int(input().strip())
A = [int(A_temp) for A_temp in input().strip().split(' ')]

min = len(A)

for i in range(len(A)):
    
    for j in range(len(A)):
        
        if( i != j):
            
            if (A[i] == A[j]):

                if (min > abs(i - j)): 

                    min = abs(i - j)

if(min == len(A)):
    print(-1)
else:
    print(min)
