N = int(input())
L = list(map(int, input().split()))

L = [x * 2 for x in L]

M = 0

def step(i, X, C):
  global M
  
  if C + (N-i) <= M:
    return
  
  if i == N:
    M = max(M, C)
    return
  
  newX = X + L[i]
  isCross = (X * newX < 0)
  step(i+1, newX, C + isCross)
  
  newX = X - L[i]
  isCross = (X * newX < 0)
  step(i+1, newX, C + isCross)

step(0, 1, 0)
      
print(M)