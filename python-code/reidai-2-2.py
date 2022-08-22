def main():
    a, b = map(int, input().split())
    result = a * b
    print("Even" if result % 2 == 0 else "Odd")

if __name__ == '__main__':
    main()
