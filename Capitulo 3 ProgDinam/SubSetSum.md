# SubSet Sum

## Definicion

Dado un conjunto de enteros, ¿existe algún subconjunto cuya suma sea exactamente cero? Por ejemplo, dado el conjunto { −7, −3, −2, 5, 8}, la respuesta es SI, porque el subconjunto { −3, −2, 5} suma cero. Este problema es NP-completo.

##  Complejidad

Hay varias maneras de resolver la suma de subconjuntos en tiempo exponencial sobre N. El algoritmo más simplista verificaría todos los posibles subconjuntos de N y, para cada uno de ellos, compararía la suma al total buscado. El tiempo de ejecución es de orden O(2NN), dado que hay 2N subconjuntos y, para verificar cada subconjunto, tenemos que sumar N elementos.
Se conoce un mejor algoritmo de tiempo exponencial, que corre en tiempo de orden O(2N/2N). El algoritmo parte los N elementos en dos conjuntos de N/2 elementos cada uno. Para cada conjunto, calcula la suma de todos los 2N/2 posibles subconjuntos y las almacena en un vector de longitud 2N/2. Entonces ordena estos dos vectores, lo que se puede hacer en tiempo O(2N/2N). Una vez que los vectores están ordenados, el algoritmo puede verificar si un elemento del primer vector más un elemento del segundo dan el total s buscado en tiempo O(2N/2). Para hacer esto, el algoritmo pasa por el primer vector en orden decreciente (empezando en el elemento más grande) y por el segundo en orden creciente (empezando por el más pequeño). Cuando la suma del elemento en turno de los dos vectores es mayor que s, el algoritmo se mueve al siguiente elemento en el primer vector, cuando es menor que s se mueve al siguiente elemento en el segundo vector. Si se encuentra s el algoritmo termina.Hay varias maneras de resolver la suma de subconjuntos en tiempo exponencial sobre N. El algoritmo más simplista verificaría todos los posibles subconjuntos de N y, para cada uno de ellos, compararía la suma al total buscado. El tiempo de ejecución es de orden O(2NN), dado que hay 2N subconjuntos y, para verificar cada subconjunto, tenemos que sumar N elementos.


![image](https://user-images.githubusercontent.com/60924631/197423086-47c9253b-a30a-411d-9789-b5f2c15f3c25.png)

[Codigo](https://github.com/iandeimpaler/Algoritmica2I/blob/main/Codigo%20Ejemplo/Subset%20Sum.cpp)
