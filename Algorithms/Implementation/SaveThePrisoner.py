T = int(input())

for i in range(T):
    n, m, s = [int(x) for x in input().split()]
    
    m = (s + m) % n
    
    if (m-1 == 0):
        print(n)
    else:
        print(m-1)
    
