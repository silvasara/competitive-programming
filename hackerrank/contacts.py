# problem available at
# https://www.hackerrank.com/challenges/contacts/problem

from collections import Counter

n = int(input())
counter = Counter()

for _ in range(n):
    count = 0
    op, name = input().split()
    if op == 'add':
        for i in range(1, len(name) + 1):
            counter.update([name[:i]])
    else:
        print(counter[name])
