N, M = map(int, input().split())

a = int(M/N)
b = M - (N*a)

for i in range(N):
  if i < b:
    print(a+1)
  else:
    print(a)
