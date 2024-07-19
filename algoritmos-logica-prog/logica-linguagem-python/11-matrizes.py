M = int(input("Digite o numero de linhas: "))
N = int(input("Digite o numero de colunas: "))

mat = [[0 for x in range(N)] for x in range(N)]

for i in range(0, M):
    for j in range(0, N):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("Matriz digitada: ")
for i in range(0, M):
    for j in range(0, N):
        print(mat[i][j], " ", end='')
    print()