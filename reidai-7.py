def main():
    N = int(input())
    a = list(map(int, input().split()))
    a.sort()
    result = 0
    for i in range(N):
        result += a[i] if i % 2 == 0 else -a[i]
    print(result)

if __name__ == '__main__':
    main()
