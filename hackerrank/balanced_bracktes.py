# problem available at
# https://www.hackerrank.com/challenges/balanced-brackets/problem

n = int(input())

brackets = {')': '(', ']': '[', '}': '{'}

for _ in range(n):
    stack = []
    for b in input():
        if stack and brackets.get(b) == stack[-1]:
            stack.pop()
        else:
            stack.append(b)
    if stack:
        print("NO")
    else:
        print("YES")
