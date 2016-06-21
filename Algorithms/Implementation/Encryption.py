#!/bin/python3

import sys,math


s = input().strip()

col = math.ceil(pow(len(s),.5))

for i in range(col):
    for j in range(math.ceil(len(s)/col)):
        try:
            print(s[i+(j*col)],end="")
        except:
            print("",end="")
    print(" ",end="")
