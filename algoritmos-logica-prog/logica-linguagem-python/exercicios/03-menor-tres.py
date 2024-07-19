x = int(input("Primeiro valor: "))
y = int(input("Segundo valor: "))
z = int(input("Terceiro valor: "))

menor = x
if y < x and y < z:
    print("Menor = ", y)
elif z < x:
    print("Menor = ", z)
else:
    print("Menor = ", x)    