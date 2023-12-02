
res=[]

c = int(input())

for i in range(c):

    aux = ''
    var = input()
    B,E = var.split(' ')
    B = int(B)
    E = int(E)
    ajd = B
    while B<=E:
        aux += str(B)
        B+=1
    B = ajd
    
    aux += aux[::-1]
    res.append(aux)
    
for y in range(len(res)):
    print(res[y])