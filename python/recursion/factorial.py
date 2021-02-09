def factorial(n):
    return n * factorial(n - 1)

def main():
    test_cases = int(input())
    for _ in range(test_cases):
        n = int(input())
        print(factorial(n))


if __name__ == '__main__':
    main()
    