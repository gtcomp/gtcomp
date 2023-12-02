
n = int(input())

for i in range(n):

    val = input()
    if val == 'P=NP':
        print('skipped')
    else:
        a, b = val.split('+')
        a = int(a)
        b = int(b)

        print(a+b)