''' Instanciar Matriz'''
ec = int(input("Número de ecuaciones: "))
col= ec+1
MatEc= list()
stop = 0
print('\n')

''' Llenar Matriz '''
for i in range(0, ec):
  MatEc.append([])
  for j in range(0, col):
    MatEc[i].append(float(input(f"Valor elemento [{i}][{j}]: ")))

''' Eliminación de Gauss '''
for i in range(0,ec):
  a = MatEc[i][i]
  ''' Cambiar renglones con 0s'''
  while a ==0:
    for c in range(i+1,ec):
      Aux = MatEc[i]
      MatEc[i]= MatEc[c]
      MatEc[c]= Aux
    if a == 0:
      stop = 1
      break
  ''' Continuación '''
  if stop == 1:
    break
  for j in range (0, col):
    MatEc[i][j] = MatEc[i][j]/a
  for k in range(i+1, ec):
    b = MatEc[k][i]*-1
    for l in range(0, col):
      z = MatEc[i][l]*b
      MatEc[k][l] = z+MatEc[k][l]

''' Método de Jordan '''

for i in range(-1, -col, -1):
  if stop ==1:
    break
  for k in range(i-1, -col, -1):
    b = MatEc[k][i-1]*-1
    for j in range(-1, -col-1, -1):
      z = MatEc[i][j]*b
      MatEc[k][j] = z+MatEc[k][j]

''' Imprimir soluciones -'''
if stop==1:
  print("\n No tiene solución")
else:
  print('\n')
  print("Solución:")
  for i in range(0, ec):
    print(f"x{i} =", MatEc[i][ec])
