def main():
    N, A, B = map(int, input().split())
    result = sum(i for i in range(1, N+1) if A <= calc(i) <= B)
    print(result)

def calc(n):
    return sum(map(int, str(n)))

if __name__ == '__main__':
    main()
