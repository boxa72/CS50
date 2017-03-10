def collatz(n):
    '''Takes a single integer arg and applies Collatz Conjecture'''
    if n % 2 == 0:
        return n/2
    else:
        return 3*n+1
print(collatz(3))
