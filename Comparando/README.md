# Práctica 12: Comparando
##### Oliver Josué Padilla Quintanilla

El desarrollo de esta práctica tiene como objetivo realizar una comparación entre los tiempos que tarda en ejecutarse un algorítmo que aplica el método de Gauss Jordan para resolver sistemas de ecuaciones, implementado en 2 lenguajes de programción diferentes: Python y C++. Pero además, dentro del lenguaje de programación python, existe una librería llamada Numpy, que está especializada en trabajar con arreglos multidimensionales (por ejemplo con matrices), entonces también se desarrollo un algorítmo utilizando esta librería. En total serán tres los algorítmos que se van a comparar, con la finalidad de ver si cambia el tiempo de ejecución entre ellos, y de ser así determinar cual es el más eficiente.

## Objetivos
Determinar si hay y cual es el algorítmo más eficiente en cuanto al tiempo de ejecución que le toma aplicar el método de Gauss Jordan para resolver sistemas de ecuaciones.

## Metodología
1. Se escogeran 3 sistemas de ecuaciones para cada tamaño desde 2x2 hasta 5x5, y que sean resolubles.
2. Dentro de cada uno de los códigos se implemento un método para calcular el tiempo de ejecución de los algorítmos. En el caso de pyhon, tanto para el código normal como el que utiliza la librería Numpy se utilizo la librería `time` para calcular los tiempos. En el caso de C++ se utilizo una librería llamada `chronos`.
3. Dado que solo se mediran los tiempos de ejecución del método de Gauss Jordan, las marcas de tiempo comenzarán justo cuando el método de Gauss Jordan comience su ejecución, y la otra justo cuando el método finalice.
4. Los tiempos obtenidos se registraran en una tabla, y al final se calculará un promedio de tiempo para cada algorítmo por cada tamaño de sistemas ecuaciones.

## Resultados
Todos los resultados están registrados en segundos (s).
**C++**
| Sistemas | 2x2 | 3x3 | 4x4 | 5x5 |
| :------: | :-: | :-: | :-: | :-: |
| 1 | 7x10-6 | 7x10-6 | 14x10-6 | 23x10-6 |
| 2 | 5x10-6 | 7x10-6 | 14x10-6 | 24x10-6 |
| 3 | 4x10-6 | 7x10-6 | 14x10-6 | ------- |

**Python (normal)**
| Sistemas | 2x2 | 3x3 | 4x4 | 5x5 |
| :------: | :-: | :-: | :-: | :-: |
| 1 | 0.0005815029144287109 | 0.0004394054412841797 | 0.0004537105560302734 | 0.000462770462036132 |
| 2 | 0.0004379749298095703 | 0.0005924701690673828 | 0.0004107952117919922 | 0.003591299057006836 |
| 3 | 0.0005388259887695312 | 0.0003769397735595703 | 0.0004582405090332031 | -------------------- |

**Python (Numpy)**
| Sistemas | 2x2 | 3x3 | 4x4 | 5x5 |
| :------: | :-: | :-: | :-: | :-: |
| 1 | 0.0006868839263916016 | 0.00122976303100585 | 0.0007035732269287109 | 0.0013778209686279297 |
| 2 | 0.0005564689636230469 | 0.00122356414794921 | 0.0011248588562011719 | 0.0016911029815673828 |
| 3 | 0.0006353855133056641 | 0.00089263916015625 | 0.0009930133819580078 | --------------------- |


**Promedios**
| Sistemas | 2x2 | 3x3 | 4x4 | 5x5 |
| :------: | :-: | :-: | :-: | :-: |
| C++ | 0.000005333 | 0.000007 | 0.000014 | 0.0000235 |
| Python | 0.000519435 | 0.000469605 | 0.000440915 | 0.002027035 |
| Numpy | 0.000626246 | 0.001115322 | 0.000940482 | 0.001534462 |

## Conclusiones
El algorítmo, a pesar de ser prácticamente el mismo, tuvo un mejor tiempo de ejecución en C++ y con una enorme diferencia a los tiempos resultantes en Python y Numpy. Esta gran diferencia entre tiempos podría deberse a que C++ es un lenguaje compilado, mientras que python es un lenguaje interpretado.

Analizando el caso particular de C++, observamos que sus tiempos tambien son más constantes para un mismo tamaño de sistema de ecuaciones, y que va aumentando prácticamente en 7 microsegundos por cada nueva ecuación (a partir de un sistema 3x3). También es posible que la diferencia sea tan grande debido a que el algoritmo de C++ se ejecuta en un entorno de desarrollo, mientras que el de python lo hace a través de internet, así que la calidad de la señal pudiese ser un factor de la demora. Habría que ejecutar el código en un entorno de desarrollo independiente de internet para comprobar si efectivamente pasa esto.

En cuanto a python, observamos que existen mejores tiempos utilizando el lenguaje normal que ocupando la libreria numpy, a pesar de que esta está especializada en la construcción y manejo de arreglos. Posiblemente es esta misma razón de ser tan especializada en la construcción de arreglos lo que provoca su mayor tiempo de ejecución, ya que el algorítmo sigue utilizando métodos estandar para resolver el sistema de ecuaciones, y al ser más complejo el arreglo creado por Numpy, tarda más en finalizar la ejecución. Habría que generar un algoritmo de Gauss Jordan que este basado en las funciones propias de Numpy, y medir su tiempo de ejecución con los mismoas sistemas de ecuaciones estudiados para determinar si es esa la razón de su demora.
