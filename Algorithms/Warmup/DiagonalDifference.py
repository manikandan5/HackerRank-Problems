#!/bin/python3

"""
    Given a square matrix of size N x N, calculate the absolute difference between the sums of its diagonals.
    
    Input Format
    
    The first line contains a single integer, N. The next N lines denote the matrix's rows, with each line containing N space-separated integers describing the columns.
    
    Output Format
    
    Print the absolute difference between the two sums of the matrix's diagonals as a single integer.
    
    Sample Input
    
    3
    11 2 4
    4 5 6
    10 8 -12
    Sample Output
    
    15
    Explanation
    
    The primary diagonal is:
    11
    5
    -12
    
    Sum across the primary diagonal: 11 + 5 - 12 = 4
    
    The secondary diagonal is:
    4
    5
    10
    Sum across the secondary diagonal: 4 + 5 + 10 = 19
    Difference: |4 - 19| = 15

"""

import sys


n = int(input().strip())
a = []
for a_i in range(n):
   a_t = [int(a_temp) for a_temp in input().strip().split(' ')]
   a.append(a_t)
sum = 0
j = len(a)-1
for i in range(len(a)):
    sum+= a[i][i] - a[j-i][i]
if sum<0:
    sum = -sum

print(sum)
