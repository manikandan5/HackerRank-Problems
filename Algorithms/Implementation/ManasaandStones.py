testCaseCount = int(input())

for i in range(testCaseCount):
    n = int(input())
    a = int(input())
    b = int(input())
    res = []
    for k in range(n):
        l = n-k-1
        val = k*a + l*b
        if val not in res:
            res.append(val)
    print(" ".join(str(x) for x in (sorted(res))))
