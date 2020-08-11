# problem available at
# https://www.hackerrank.com/challenges/find-the-running-median/problem

import heapq

n = int(input())

heap = []
list_ = []

for _ in range(n):
    a = int(input())

    while heap:
        if len(heap) > len(list_):
            if heap[0] < a:
                b = heapq.heappushpop(heap, a)
                heapq.heappush(list_, -b)
            else:
                heapq.heappush(list_, -a)
        else:
            if -list_[0] > a:
                b = -heapq.heappushpop(list_, -a)
                heapq.heappush(heap, b)
            else:
                heapq.heappush(heap, a)
        break

    if not heap:
        heapq.heappush(heap, a)

    if len(heap) > len(list_):
        print(round(float(heap[0]), 1))
    else:
        print(round(float((heap[0]-list_[0])/2), 1))
