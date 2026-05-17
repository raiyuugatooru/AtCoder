T, X = map(int, input().split())

A = list(map(int, input().split()))

print(0, A[0])

lastA = A[0]
for i in range(1, T+1):
  if abs(lastA - A[i]) >= X :
    print(i, A[i])
    lastA = A[i]