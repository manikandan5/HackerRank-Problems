#!/bin/python3

import sys


x1,v1,x2,v2 = input().strip().split(' ')
x1,v1,x2,v2 = [int(x1),int(v1),int(x2),int(v2)]
def func(x1,v1,x2,v2):
    for i in range(10000):
        if(((v1*i)+x1)==((v2*i)+x2)):
            print("YES")
            return
    print("NO")
    
if (x1> x2 and v1> v2):
    print("NO")
elif(x2>x1 and v2>v1):
    print("NO")
else:
    #func(x1,v1,x2,v2)
    print("YES" if (x2 - x1) * (v2 - v1) < 0 and (x2 - x1) % (v2 - v1) == 0 else "NO")
