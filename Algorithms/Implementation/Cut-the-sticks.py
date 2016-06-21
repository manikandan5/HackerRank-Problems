#!/bin/python3

import sys


n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]


arr = sorted(arr,reverse=True)

while len(arr)>1:
    print(len(arr))
    for i in range(len(arr)):
        arr[i] = arr[i] - arr[-1]
    for i in range((len(arr)-1),0,-1):
        if(arr[i]==0):
            arr.pop(i)
if((arr[0])!=0):            
    print(len(arr))
