a, b = map(int, input().split())
flag = a * b % 2 == 0
ans = 'Even' if flag else 'Odd'
print(ans)
