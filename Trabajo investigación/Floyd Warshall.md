# Floyd Warshall

 El algoritmo de Floyd-Warshall es la opción utilizada cuando se desea determinar el camino mínimo entre todos los pares de vértices de un grafo, comparando todos los posibles caminos logra mejorar paulatinamente la estimación hasta llegar a la más óptima. Esto puede presentarse de manera más clara a través de un ejemplo de implementación. Pero antes, revisaremos el análisis del tiempo de ejecución para este caso.

## Descripción del Problema

Al momento de analizar un algoritmo revisamos el conjunto de operaciones primitivas de alto nivel que son independientes del lenguaje de programación que se utilice, estas pueden ser identificadas en el pseudocódigo del mismo.
![image](https://user-images.githubusercontent.com/60924631/197426135-92b08435-bba6-4ebf-a1c0-71977e5f2190.png)


###### Conteo de operaciones primitivas

Para ésto, revisamos cada paso del algoritmo en el pseudocódigo y contamos las operaciones que se ejecutan. A continuación se muestra el procedimiento llevado a cabo:

![image](https://user-images.githubusercontent.com/60924631/197426163-25e1965b-abf7-4b8b-abcd-71594d6b0f22.png)


##### Complejidad

Ahora, calculamos el tiempo de ejecución t(n) del algoritmo Floyd-Warshall sumando el costo obtenido de las operaciones primitivas.

![image](https://user-images.githubusercontent.com/60924631/197426260-ff818f2d-6874-4122-a922-08680361626b.png)

[Codigo](https://github.com/iandeimpaler/Algoritmica2I/blob/main/Codigo%20Ejemplo/Floyd%20Warshall.cpp)
