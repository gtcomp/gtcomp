
num =[]


while True:

    try:
        num = input().split()
        
        A = int(num[0])
        B = int(num[1]) 
        C = int(num[2])
    

        if A==1 and B==0 and C==0:
            print('A')
        elif A==0 and B==1 and C==0:
            print('B')
        elif A==0 and B==0 and C==1:
            print('C')
        elif A==0 and B==1 and C==1:
            print('A')
        elif A==1 and B==0 and C==1:
            print('B')
        elif A==1 and B==1 and C==0:
            print('C')
        else:
            print('*')

        num=[]
    except EOFError:
        break

