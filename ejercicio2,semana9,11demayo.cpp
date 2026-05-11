# Ventas de una tienda

ventas = []

# Pedir las ventas de los 7 dias
for i in range(7):
    venta = float(input("Ingrese la venta del dia: "))
    ventas.append(venta)

# Calcular total vendido
total = 0

for v in ventas:
    total = total + v

# Contar dias con ventas mayores a 150
contador = 0

for v in ventas:
    if v > 150:
        contador = contador + 1

# Buscar la venta mas baja
menor = ventas[0]

for v in ventas:
    if v < menor:
        menor = v

# Mostrar resultados
print("Total vendido:", total)
print("Dias con ventas mayores a 150:", contador)
print("Venta mas baja:", menor)