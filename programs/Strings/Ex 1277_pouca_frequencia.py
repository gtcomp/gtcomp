

T = int(input())

nome = []
pres = []
falta = 0
med = 0
S_prova = []
resposta = []

for i in range(T):
    N = int(input())

    nomes = input()
    presencas = input()


    nome = []
    pres = []
    S_prova = []

    nome = nomes.split()
    pres = presencas.split()

    for cont in range(N):
        falta = 0
        med = 0
        aux = pres[cont]
        for y in range(len(aux)):
            aux = pres[cont]
            if aux[y] == 'A':
                falta +=1
            elif aux[y] == 'M':
                med +=1
        total = len(aux) - med
        if (total-falta)/total < 0.75:
            S_prova.append(nome[cont])

        res = ''
        for k in range(len(S_prova)):
            res = res + S_prova[k]
            if k < len(S_prova)-1:
                res = res + ' '

    resposta.append(res)

for f in range(len(resposta)):
    print(resposta[f])

