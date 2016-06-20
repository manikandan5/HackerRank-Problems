#!/bin/python3

"""
    Given a time in AM/PM format, convert it to military (-hour) time.
    
    Note: Midnight is  on a -hour clock, and  on a -hour clock. Noon is  on a -hour clock, and  on a -hour clock.
    
    Input Format
    
    A single string containing a time in -hour clock format (i.e.:  or ), where .
    
    Output Format
    
    Convert and print the given time in -hour format, where .
    
    Sample Input
    
    07:05:45PM
    Sample Output
    
    19:05:45
"""

import sys


time = input().strip()

hour = time.split(":")[0]

min = time.split(":")[1]

temp = time.split(":")[2]

sec = temp[0:2]

time = temp[2:4]

if time == "PM":
    if hour != "12":
        hour = int(hour)+12
else:
    if hour == "12":
        hour = "00"

print(str(hour)+":"+min+":"+sec)
