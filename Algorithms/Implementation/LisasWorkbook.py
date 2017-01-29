import math

n, k = [int(elem) for elem in input().split()]

problems = [int(elem) for elem in input().split()]

pageNum = 0
special = 0
problemStart = 0
problemEnd = 0

for i in range(n):

    pageThisChapter = math.ceil(problems[i] / k )
    problemThisChapter = problems[i]
    problemStart = 1
    if problemThisChapter > k:
        problemEnd = k
    else:
        problemEnd = problemThisChapter

    for j in range(pageThisChapter): 
        
        pageNum += 1

        if pageNum >= problemStart and pageNum <= problemEnd :
            special += 1

        problemThisChapter = problemThisChapter - (problemEnd - problemStart + 1)

        problemStart = problemEnd + 1

        if problemThisChapter > k:
            problemEnd = problemEnd + k
        else:
            problemEnd = problemEnd + problemThisChapter

print(special)
