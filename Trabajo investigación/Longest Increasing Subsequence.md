# Longest Increasing Subsequence

## Descripcion del problema
  
Consiste en encontrar una subsecuencia de una secuencia dada donde los elementos de la subsecuencia están ordenados, de menor a mayor, y la subsecuencia sea tan larga como sea posible. Esta subsecuencia no es necesariamente continua, o única.

###### Complejidad y teoria

El algoritmo descrito abajo resuelve el problema de la subsecuencia creciente más larga eficientemente con arreglos y búsqueda binaria. Se procesa la secuencia de elementos en orden, manteniendo la subsecuencia creciente máxima encontrada hasta el punto actual. Denotando los valores de la secuencia como X[0], X[1], etc. Entonces, luego de procesar X[i], el algoritmo tendrá almacenado valores en dos arreglos:

M[j] — almacena el índice k del menor valor X[k] tal que existe una
subsecuencia creciente de longitud j que termina en X[k] en el rango k ≤ i. Note que j ≤ k ≤ i, pues j representa la longitud de la subsecuencia creciente, y k representa el índice de su terminación. No puede haber una subsecuencia creciente de longitud 13 terminando en el índice 11. k ≤ i por definición.

P[k] — almacena el índice del predecesor de X[k] en la subsecuencia creciente
máxima que termina en X[k]. Además, el algoritmo cuenta con una variable L representando la longitud de la subsecuencia creciente máxima que se va calculando. Dado que el algoritmo usa numeración con base cero, para mayor claridad M es iniciada con M[0], que será aprovechado de tal forma que M[j] corresponde a la subsecuencia de longitud j. Una implementación real puede saltarse M[0] y ajustar los índices.

Note que, en cualquier punto del algoritmo, la secuencia

X[M[1]], X[M[2]], ..., X[M[L]]
es nodecreciente. Para, si existe una subsecuencia creciente de longitud i terminando en X[M[i]], entonces existe también una subsecuencia de longitud i-1 terminando en un valor más pequeño: concretamente el que termina en X[P[M [i]]]. Así, es posible una búsqueda binaria en esta secuencia en tiempo logarítmico.

![image](https://user-images.githubusercontent.com/60924631/197428210-ec9eb7fc-935a-4da2-a0b9-cef269e01308.png)

[Codigo](https://github.com/iandeimpaler/Algoritmica2I/blob/main/Codigo%20Ejemplo/Longest%20Increasing%20Subsequence.cpp)
