#!/bin/python3

import sys

units = {1:"one" , 2:"two" , 3:"three" , 4:"four" , 5:"five" , 6: "six" , 7:"seven" , 8:"eight" , 9:"nine", 10:"ten" , 11:"eleven" , 12:"twelve" , 13:"thirteen" , 14:"fourteen" , 15:"fifteen" , 16:"sixteen" , 17:"seventeen" , 18:"eighteen" , 19:"nineteen"}

tens = {20:"twenty" , 30:"thirty" , 40:"forty" , 50:"fifty" }

h = int(input().strip())
m = int(input().strip())

if (m==0):
    if(h in units.keys()):
        print(units[h]+" o' clock")
elif (m==15):
    print("quarter past "+units[h])
elif (m==30):
    print("half past "+units[h])
elif (m==45):
    print("quarter to "+units[h+1])
elif (m < 30):
    if(m in units.keys()):
        print(units[m]+" minutes past "+units[h])
    elif(m in tens.keys()):
        print(tens[m]+" minutes past "+units[h])
    else:
        print(tens[(int(m/10))*10]+" "+units[int(m%10)]+" minutes past "+units[h])
else:
    m = 60-m
    if(m in units.keys()):
        print(units[m]+" minutes to "+units[h+1])
    elif(m in tens.keys()):
        print(tens[m]+" minute to "+units[h+1])
    else:
        print(tens[(int(m/10))*10]+" "+units[int(m%10)]+" minutes to "+units[h+1])



