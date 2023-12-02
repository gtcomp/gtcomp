
while True:
    try:
        palavra = input()


        palavra = palavra.replace('@','a')
        palavra = palavra.replace('&','e')
        palavra = palavra.replace('!','i')
        palavra = palavra.replace('*','o')
        palavra = palavra.replace('#','u')
            

        print(palavra)
    except EOFError:
        break
