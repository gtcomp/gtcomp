

n = int(input())

for i in range(n):
    frase = input()
    frase_cor = ""
    ind_meio = int(len(frase)/2)-1
    ind = ind_meio
    meio = ind_meio+1

    for y in range((meio)):
    
        frase_cor = frase_cor + frase[ind]
        ind-=1
    ind = int(len(frase)-1)

    for y in range(meio):
        
        frase_cor = frase_cor + frase[ind]
        ind-=1
    print(frase_cor)