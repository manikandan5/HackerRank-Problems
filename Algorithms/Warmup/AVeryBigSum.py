#!/bin/python3

"""
    You are given an array of integers of size N. You need to print the sum of the elements in the array, keeping in mind that some of those integers may be quite large.
    
    Input
    
    The first line of the input consists of an integer N. The next line contains N space-separated integers contained in the array.
    
    
    Sample Input
    5
    1000000001 1000000002 1000000003 1000000004 1000000005
    
    Output
    Print a single value equal to the sum of the elements in the array. In the above sample, you would print .
    
"""

import sys


n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]
total = 0
for elem in arr:
    total += elem
print(total)

