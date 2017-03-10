def factorial(n):
    '''Recursive function for computing the
    factorial of n.'''

    if n == 1:
        return 1
    else:
        result = n * factorial(n-1)
        return result
print(factorial(4))
