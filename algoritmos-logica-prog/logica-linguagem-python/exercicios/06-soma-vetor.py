N = int(input("Quantos numeros voce vai digitar? "))
vet = [0 for x in range(N)]

for i in range(0, N):
    vet[i] = float(input("Digite um numero: "))

soma = 0
print("Valores = ", end='')
for i in range(0, N):
    print(vet[i], " ", end='')
    soma = soma + vet[i]

print()
print("Soma = ", soma)
media = soma / N
print("Media = ", media)      