N = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(N)] for x in range(N)]

for i in range(0, N):
    for j in range(0, N):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("Diagonal principal: ")        
for i in range(0, N):
    print(mat[i][i], " ", end='')

print()
somaNegativos = 0
for i in range(0, N):
    for j in range(0, N):
        if mat[i][j] < 0:
            somaNegativos += 1
print("Quantidade de negativos: ", somaNegativos)            
        