

ab = 0      ##abre parenteses
fc = 0      ##fecha parenteses

exc = 0     ## excessao (1 = true)

while True:
    try:
        expressao = input()

        for c in expressao:
            if ab < fc and fc != 0:
                exc = 1
                break

            if c == '(':
                ab+=1
            elif c == ')':  ##())(
                fc+=1
            
        if ab != fc or exc == 1:
            print("incorrect")

        else:
            print("correct")
        
        ab = 0          
        fc = 0          ## resetar contagem
        exc = 0


    except EOFError:
        break