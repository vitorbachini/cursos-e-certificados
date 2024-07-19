import math

b = float(input("Base do retangulo: "))
h = float(input("Altura do retangulo: "))

area = b * h
perimetro = 2 * (b + h)
diagonal = math.sqrt((b ** 2) + (h ** 2))

print(f"Area = {area:.4f}")
print(f"Perimetro = {perimetro:.4f}")
print(f"Diagonal = {diagonal:.4f}")