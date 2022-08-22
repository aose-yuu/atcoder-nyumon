def main():
    N, A, B = map(int, input().split())
    result = 0
    for i in range(1, N+1):
        x = calc_sum_digits(i)
        if A <= x and x <= B:
            result += i
    print(result)

def calc_sum_digits(n):
    sum_digit = 0
    while n > 0:
        sum_digit += n % 10
        n //= 10
    return sum_digit


if __name__ == '__main__':
    main()
