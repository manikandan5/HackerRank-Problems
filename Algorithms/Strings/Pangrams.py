inputStr = input()
alpha = []
for s in inputStr:
    if s != " " and s.lower() not in alpha:
        alpha.append(s.lower())

if len(alpha) == 26:
    print("pangram")
else:
    print("not pangram")
