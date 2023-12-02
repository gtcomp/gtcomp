PI = 3.1415

val = input()

r, L = val.split()

r = int(r)
L = int(L)

V = int(4*PI*r**3)/3
q = int(L/V)

print(q)