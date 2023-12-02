val = input()

n, f= val.split()

n = int(n)
f = int(f)

val1 = []
val2 = []
frase = []

for i in range(n):
    erro = input()

    v1, v2 = erro.split()
    val1.append(v1)
    val2.append(v2)


for y in range(f):
    frase = input()
    for i in range(n):
        dic = {val1[i] : val2[i], val2[i] : val1[i]}
        tnTable = frase.maketrans(dic)
        frase = frase.translate(tnTable)
    print(frase)
