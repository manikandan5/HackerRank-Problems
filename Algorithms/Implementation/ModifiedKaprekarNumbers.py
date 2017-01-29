start = int(input())
end = int(input())

flag = True

l = 0
r = 0

for num in range(start,end+1):
    digit = len(str(num))
    square = str(num * num)
    if(len(square) == 1):
        l = 0
        r = square
    elif (len(square) == digit*2) :
        l = square[:digit]
        r = square[digit:]
    else:
        l = square[:(digit-1)]
        r = square[(digit-1):]
    if (int(l)+int(r) == num):
        print(num, end =" ")
        flag = False
        
if(flag):
    print("INVALID RANGE")
