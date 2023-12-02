
saida = []

while True:
    var = input()
    lista = []
    lista = var.split(' ')
    M,N = lista
    M = int(M)
    N = int(N)
    if M==0 & N==0:
        break

    R = M + N
    R = str(R)
    R = R.replace('0', '')
    saida.append(R)

for i in range(len(saida)):
    print(saida[i])        