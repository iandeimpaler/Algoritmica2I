# Algoritmica2I
La informacion presentada corresponde a las estructuras de datos correspondientes.
# Ian Marcus Terceros Villegas
# Contenido


## Trie 
##### Definicion
Un trie de sufijos es un trie construido sobre el conjunto de todos los sufijos de T. Cada rama está rotulada por un símbolo de Σ y cada hoja representa un sufijo de T. El conjunto de sufijos se obtiene recorriendo todos los caminos posibles desde la raíz hasta una hoja y concatenando los rótulos de las ramas que forman cada uno de esos caminos. En cada nodo hoja se mantiene el ındice del sufijo que esa hoja representa

![image](https://user-images.githubusercontent.com/60924631/193960023-76756ebf-d6be-40a7-96b2-00a79f510f49.png)

-[Codigo]() 


## Union Find
Algoritmo también se llama algoritmo de búsqueda de unión, que es una especie de Y compruebe el conjunto Algoritmo de estructura de datos. Contiene dos operaciones principales:
- Find Se utiliza para encontrar a qué conjunto pertenece un elemento y se puede utilizar para determinar si dos elementos están en el mismo conjunto
- Union Se utiliza para fusionar dos conjuntos diferentes


![image](https://user-images.githubusercontent.com/60924631/193960281-53dad9ce-7c07-4b8e-b9f4-7c665bca7c24.png)


## Segment Tree 
Es una estructura de datos muy versátil que sirve para responder varias consultas de agregación tipo máximo, mínimo, sumas, promedio, multiplicaciones y otras menos estándar, en tiempo log N para un universo de N elementos. Típicamente el ST se construye para responder consultas sobre un arreglo (como "entrégame el mínimo valor entre los índices i y j del arreglo"). También se pueden hacer actualizaciones de elementos de ese arreglo que tardan tiempo log N. Si tenemos entonces un problema donde hay Q consultas (preguntas por rango y actualizaciones de elementos) sobre un arreglo de largo N, el tiempo total de la solución con ST será Ο(Q log N) más el tiempo de construcción inicial del ST (que se puede lograr en Ο(N log N)).

![image](https://user-images.githubusercontent.com/60924631/193960870-f0cb3e0a-654a-4552-a764-ba051ad1f855.png)

## BIT
Estructura BIT es una estructura de datos que proporciona métodos eficientes para el cálculo y la manipulación de las cantidades de prefijos de un array de valores.

![image](https://user-images.githubusercontent.com/60924631/193961237-c943f79d-cd7d-45f3-8428-99969ce0dc89.png)

- [ejercicios](https://github.com/iandeimpaler/Algoritmica2I/commit/219778942ac948f73eaec3981a25417635707c41)





