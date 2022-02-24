from collections import deque

# n:정점 개수 / m:간선의 개수 / v:탐색 시작 번호
n, m, v = map(int, input().split())

# 정점마다 연결 저장할 리스트 제작
graph = [[0] for _ in range(n)]

# m개의 간선 입력
for i in range(m):
    a, b = map(int, input().split())
    graph[a-1].append(b)
    graph[a-1].sort()
    graph[b-1].append(a)
    graph[b-1].sort()
    if 0 in graph[a-1]:
        graph[a-1].remove(0)
    if 0 in graph[b-1]:
        graph[b-1].remove(0)

# 도착했는지
path = [False] * n

# dfs
def dfs(graph, V, path):
    path[V] = True
    print(V+1, end=' ')
    for p in graph[V]:
        if p == 0: break
        if not path[p-1]:
            dfs(graph, p-1, path)

dfs(graph, v-1, path)
print()

path = [False] * n
# BFS
def bfs(graph, V, path):
    # 큐 구현
    queue = deque([V+1])
    path[V] = True
    # 큐가 빌 때까지 반복
    while queue:
        # 큐에서 하나의 원소를 뽑아 출력
        N = queue.popleft()
        print(N, end=" ")
        if 0 in graph[N-1]:
            break
        # 해당 원소와 연결된, 아직 방문하지 않은 원소들을 큐에 삽입
        for i in graph[N-1]:
            if not path[i-1]:
                queue.append(i)
                path[i-1] = True

bfs(graph, v-1, path)