import math

t = int(input())
for i in range(t):
    temp = input()
    start,end = temp.split()
    l = int(math.sqrt(int(start)))
    u = int(math.sqrt(int(end)))
    value = u - l
    if (l*l == int(start)):
        if (u==l):
            value = 1
        else:
            value +=1
    print(value)
    
