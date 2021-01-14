# -*- coding: utf-8 -*-
"""
# Gauss Jordan en Python
Oliver Josué Padilla Quintanilla
"""

''' Llenar la matriz de ecuaciones '''
ec = int(input("Número de ecuaciones: "))
col= ec+1
MatEc= list()
for i in range(0, ec):
  MatEc.append([])
  for j in range(0, col):
    MatEc[i].append(float(input(f"Valor elemento [{i}][{j}]: ")))
print(MatEc)

''' Método de Gauss '''
for i in range(0,ec):
  a = MatEc[i][i]
  for j in range (0, col):
    MatEc[i][j] = MatEc[i][j]/a
  print(MatEc)
  for k in range(i+1, ec):
    b = MatEc[k][i]*-1
    print("B= ", b)
    for l in range(0, col):
      z = MatEc[i][l]*b
      print("Z= ", z)
      MatEc[k][l] = z+MatEc[k][l]
print(MatEc)

''' Método de Jordan '''
for i in range(-1, -col, -1):
  for k in range(i-1, -col, -1):
    b = MatEc[k][i-1]*-1
    print("B= ", b)
    for j in range(-1, -col-1, -1):
      z = MatEc[i][j]*b
      print("Z= ", z)
      MatEc[k][j] = z+MatEc[k][j]
print(MatEc)

''' Impresión de resultados '''
for i in range(0, ec):
  print(f"x{i} =", MatEc[i][ec])
