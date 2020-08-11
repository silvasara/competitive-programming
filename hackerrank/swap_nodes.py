# problem available at
# https://www.hackerrank.com/challenges/swap-nodes-algo/problem

from collections import defaultdict
import sys
import threading


def swap_subtrees(tree, depths, k):
    for parent in tree:
        if depths[parent] % k == 0:
            a, b = tree[parent]
            tree[parent] = b, a


def in_order(tree, node, result):
    left, right = tree[node]
    if left != -1:
        in_order(tree, left, result)

    result.append(node)

    if right != -1:
        in_order(tree, right, result)


def main():
    n = int(input())
    tree = defaultdict(tuple)
    depths = defaultdict(int)
    depths[1] = 1

    for parent in range(1, n+1):
        a, b = map(int, input().split())

        tree[parent] = a, b
        depths[a] = depths[parent] + 1
        depths[b] = depths[parent] + 1

    t = int(input())
    for _ in range(t):
        k = int(input())
        swap_subtrees(tree, depths, k)

        result = []
        in_order(tree, 1, result)
        print(' '.join(str(e) for e in result))


if __name__ == "__main__":
    sys.setrecursionlimit(2**32//2-1)
    threading.stack_size(1 << 27)

    thread = threading.Thread(target=main)
    thread.start()
    thread.join()
