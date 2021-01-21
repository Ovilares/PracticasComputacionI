# Práctica 12: Comparando
### Oliver Josué Padilla Quintanilla

El desarrollo de esta práctica tiene como objetivo realizar una comparación entre los tiempos que tarda en ejecutarse un algorítmo que aplica el método de Gauss Jordan para resolver sistemas de ecuaciones, implementado en 2 lenguajes de programción diferentes: Python y C++. Pero además, dentro del lenguaje de programación python, existe una librería llamada Numpy, que está especializada en trabajar con arreglos multidimensionales (por ejemplo con matrices), entonces también se desarrollo un algorítmo utilizando esta librería. En total serán tres los algorítmos que se van a comparar, con la finalidad de ver si cambia el tiempo de jecución entre ellos, y de ser así determinar cual es el más eficiente.

## Objetivos
Determinar sí hay y cual es el algorítmo más eficiente en cuanto al tiempo de ejecución que le toma aplicar el método de Gauss Jordan para resolver sistemas de ecuaciones.

Metodología
Se escogeran 3 sistemas de ecuaciones para cada tamaño desde 2x2 hasta 5x5, y que sean resolubles.
Dentro de cada uno de los códigos se implemento un método para calcular el tiempo de ejecución de los algorítmos. En el caso de pyhon, tanto para el código normal como el que utiliza la librería Numpy se utilizo la librería ==time==
