n = int(input())
raw = input()

ans = raw
for i in range(n):
  if ans[0] == "o":
    ans = ans[1:]
  else:
    break
  
print(ans)