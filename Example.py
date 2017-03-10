list = [12,34,764,24,365,57,79,467,345,]
num_list = 0

for num in list:
    num_list += num

print(num_list)

for num in list:
    if num % 2 == 0:
        print(num)
    else:
        print('Odd number!')
