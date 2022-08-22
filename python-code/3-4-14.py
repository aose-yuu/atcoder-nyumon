INF = 2 ** 30
def main():
    N = int(input())
    A = list(map(int, input().split()))

    result = INF

    for a in A:
        counter = how_many_times(a)
        result = min(result, counter)

    print(result)

def how_many_times(num):
    counter = 0
    while num % 2 == 0:
        num //= 2
        counter += 1
    return counter

if __name__ == '__main__':
    main()
