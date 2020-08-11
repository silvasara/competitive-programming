# problem available at
# https://www.hackerrank.com/challenges/ctci-bfs-shortest-reach/problem
from collections import defaultdict


def get_distances(graph, start, distances):
    visited = []
    queue = [start]

    while queue:
        node = queue.pop(0)
        visited.append(node)
        neighbours = graph[node]
        d = distances[node]

        for n in neighbours:
            if n not in visited:
                queue.append(n)
                distances[n] = d + 6


q = int(input())

for _ in range(q):
    nodes, edges = map(int, input().split())
    graph = defaultdict(lambda: [])

    for e in range(edges):
        u, v = map(int, input().split())
        graph[u-1].append(v-1)
        graph[v-1].append(u-1)

    start = int(input()) - 1

    distances = [-1 for i in range(nodes)]
    distances[start] = 0

    print(graph)
    get_distances(graph, start, distances)
    distances.pop(start)

    print(' '.join(str(e) for e in distances))
