
res= []

n = int(input())

p1 = '0'

cont = int(0)
num = 0

for i in range(n):

    res.append(int(p1))
    aux = ''
    aux = input()
    for ch in aux:
        cont +=1
        if ch.isdigit():
            p1 += ch
            if cont<13:
                if aux[cont].isalpha():
                    res[num] += int(p1)
                    p1='0' 
    res[num] += int(p1)
    p1='0' 
    num +=1
    cont = 0

for y in range(len(res)):
    print(res[y])