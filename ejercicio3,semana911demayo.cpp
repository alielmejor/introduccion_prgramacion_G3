# Puntajes de un videojuego

puntajes = []

# Pedir los 6 puntajes
for i in range(6):
    puntos = int(input("Ingrese el puntaje: "))
    puntajes.append(puntos)

# Buscar el puntaje mas alto
mayor = puntajes[0]

for p in puntajes:
    if p > mayor:
        mayor = p

# Ordenar los puntajes
puntajes.sort()

# Contar puntajes mayores a 500
contador = 0

for p in puntajes:
    if p > 500:
        contador = contador + 1

# Mostrar resultados
print("Puntaje mas alto:", mayor)

print("Puntajes ordenados:")
for p in puntajes:
    print(p)

print("Cantidad de puntajes mayores a 500:", contador)