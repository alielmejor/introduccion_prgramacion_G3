# Temperaturas de la semana

temperaturas = []

# Pedir las 7 temperaturas
for i in range(7):
    temp = float(input("Ingrese la temperatura del dia: "))
    temperaturas.append(temp)

# Mostrar las temperaturas
print("Temperaturas registradas:")
for t in temperaturas:
    print(t)

# Calcular promedio
suma = 0

for t in temperaturas:
    suma = suma + t

promedio = suma / 7

# Buscar mayor y menor
mayor = temperaturas[0]
menor = temperaturas[0]

for t in temperaturas:
    if t > mayor:
        mayor = t

    if t < menor:
        menor = t

# Mostrar resultados
print("Promedio semanal:", promedio)
print("Temperatura mas alta:", mayor)
print("Temperatura mas baja:", menor)