
vet = [1, 2, 3]
exp = "Exemplo de string"
exp_list = ['O ', 'rato ', 'roueu']

# Exemplo char():

print(chr(97))                 # o resultado será 'a' que é a letra correspondente a 97
print()

# Exemplo .join()

print(''.join(exp_list))       # o resultado será a junção de todas as strings de exp_list
print()

# Exemplo len():

print(len(exp))                # o resultado será o tamanho da string exp, nesse caso 17
print()

# Exemplo ord():

print(ord('a'))                # o resultado será 97, pois é o número que representa o caracter 'a'
print()

# Exemplo .split():

a, b, c = exp.split()          # aqui foi onde separou a string exp, sendo as divisírias, os espaços 

print(a)
print(b)                       # os prints mostram que realmente a string foi dividida para a , b , c
print(c)
print()

# Exemplo str():
print(type(vet))
vet = str(vet)                # aqui mostra a transformação de uma variavel de classe lista em classe string
print(type(vet))

print()

# Exemplo translate()

dictionary = {'a': 'A', 'e':'E', 'i': 'I', 'o': 'O', 'u': 'U', 'x': None, 'y': None, 'z': None}
transTable = exp.maketrans(dictionary)
txt = exp.translate(transTable)                     
print(exp)                  
                            # para usar essa função é necessário criar um dicionário com o que se deseja ser alterado
                            # assim, usando o maketrans() transforma-se isso em uma tabela, para dai fazer as substituições no translate