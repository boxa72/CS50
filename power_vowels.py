def power(b,p):
    if p == 0:
        return 1
    elif p > 0:
        return b * power(b, p - 1)
    else:
        return 1.0 / b * power(b,p + 1)

def vowels(s):
    ourVowels = ['a', 'e', 'i', 'o', 'u']

    if s == '':
        return 0
    elif s[0] in ourVowels:
        return 1 + vowels(s[1:])
    else:
        return vowels(s[1:])
    
