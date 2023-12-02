

num = int(input())
alfa = "abcdefghijklmnopqrstuvxwyz"
i = 0
cont = int(0)
res = []

while(i < num):
    cont = int(0)
    frase = input()

    for carac in alfa:
        k = 0
        for c in frase:
            if k == 0:
                if carac == c:
                    cont+=1
                    k = 1

    i+=1
    if cont >=26:
        res.append("frase completa")
    elif cont >=13 and cont <26:
        res.append("frase quase completa")
    elif cont <13:
        res.append("frase mal elaborada")


for y in range(len(res)):
    print(res[y])