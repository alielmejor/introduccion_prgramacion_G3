# Inventario de una libreria

ventas = []

# Ingresar ventas de 5 categorias
for i in range(5):
    cantidad = int(input("Ingrese la cantidad de libros vendidos: "))
    ventas.append(cantidad)

# Calcular total
total = 0

for v in ventas:
    total = total + v

# Buscar categoria con mas ventas
mayor = ventas[0]
categoria = 1

for i in range(5):
    if ventas[i] > mayor:
        mayor = ventas[i]
        categoria = i + 1

# Calcular promedio
promedio = total / 5

# Mostrar resultados
print("Total de libros vendidos:", total)
print("Categoria con mas ventas:", categoria)
print("Promedio de ventas:", promedio)