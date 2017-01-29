init_input = input().split()

n = int(init_input[0])
k = int(init_input[1])%n
q = int(init_input[2])

array = input().split()

for i in range(q):
    m = int(input())
    if m-k < 0:
        print(array[n-k+m])
    else:
        print(array[m-k])
    
    
