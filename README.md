# Algoritmica2I

La informacion presentada corresponde a las estructuras de datos correspondientes.

# Ian Marcus Terceros Villegas

Ingenieria de sistemas computacionales UPB 2022
# Contenido

- [Trie](https://github.com/iandeimpaler/Algoritmica2I/edit/main/README.md#trie)
- [Union Find](https://github.com/iandeimpaler/Algoritmica2I/edit/main/README.md#union-find)
- [Segment Tree](https://github.com/iandeimpaler/Algoritmica2I/edit/main/README.md#segment-tree)
- [Bit](https://github.com/iandeimpaler/Algoritmica2I/edit/main/README.md#bit)

## Trie 
##### Definicion
Un trie de sufijos es un trie construido sobre el conjunto de todos los sufijos de T. Cada rama está rotulada por un símbolo de Σ y cada hoja representa un sufijo de T. El conjunto de sufijos se obtiene recorriendo todos los caminos posibles desde la raíz hasta una hoja y concatenando los rótulos de las ramas que forman cada uno de esos caminos. La idea del Trie es armar un árbol, donde los nodos son las letras de las palabras. Los nodos donde termina una palabra. Es decir, si recorremos el arbol desde la raíz hasta ese nodo, formaremos una de las palabras iniciales. Si lo recorremos en Preorden, podemos ordenar alfabéticamente a las palabras que forman el Trie. Los números escritos expresan el orden alfabético de las palabras.

![image](https://user-images.githubusercontent.com/60924631/193960023-76756ebf-d6be-40a7-96b2-00a79f510f49.png)

- [Codigo](https://github.com/PaulLandaeta/algoritmica2/blob/master/contenido/Estructura_de_datos/trie/trie_array.cpp) 


## Union Find
Algoritmo también se llama algoritmo de búsqueda de unión, que es una especie de Y compruebe el conjunto Algoritmo de estructura de datos. Contiene dos operaciones principales:
- Find Se utiliza para encontrar a qué conjunto pertenece un elemento y se puede utilizar para determinar si dos elementos están en el mismo conjunto
- Union Se utiliza para fusionar dos conjuntos diferentes


![image](https://user-images.githubusercontent.com/60924631/193960281-53dad9ce-7c07-4b8e-b9f4-7c665bca7c24.png)

- [Codigo](https://github.com/PaulLandaeta/algoritmica2/blob/master/contenido/Estructura_de_datos/Union_Find/unionFind.cpp)


## Segment Tree 
Es una estructura de datos muy versátil que sirve para responder varias consultas de agregación tipo máximo, mínimo, sumas, promedio, multiplicaciones y otras menos estándar, en tiempo log N para un universo de N elementos. Típicamente el ST se construye para responder consultas sobre un arreglo (como "entrégame el mínimo valor entre los índices i y j del arreglo"). También se pueden hacer actualizaciones de elementos de ese arreglo que tardan tiempo log N. Si tenemos entonces un problema donde hay Q consultas (preguntas por rango y actualizaciones de elementos) sobre un arreglo de largo N, el tiempo total de la solución con ST será Ο(Q log N) más el tiempo de construcción inicial del ST (que se puede lograr en Ο(N log N)).

![image](https://user-images.githubusercontent.com/60924631/193960870-f0cb3e0a-654a-4552-a764-ba051ad1f855.png)

- [Codigo](https://github.com/PaulLandaeta/algoritmica2/blob/master/contenido/Estructura_de_datos/Segment_tree/segmentTree.cpp)


## BIT
Estructura BIT es una estructura de datos que proporciona métodos eficientes para el cálculo y la manipulación de las cantidades de prefijos de un array de valores.
Los trees son un tipo de estructura de datos jerárquica, a diferencia de las Linked Lists, Stack and Queues, Array que son estructuras de datos lineales.

- El nodo principal es llamado root.

- Los nodos que están abajo directamente de un elemento son llamados children.

- Los elementos directamente de arriba son llamados parent.

- Los elementos que no tienen children son llamados leaves.

![image](https://user-images.githubusercontent.com/60924631/193961237-c943f79d-cd7d-45f3-8428-99969ce0dc89.png)

- [Codigo](https://github.com/PaulLandaeta/algoritmica2/blob/master/contenido/Estructura_de_datos/BIT/bit.cpp)

## BackTracking
El algoritmo backtracking consiste en encontrar soluciones a problemas con soluciones completas, esto quiere decir que vamos a restroceder en unestro camino, nuestro recorrido.Para esto existen diferentes abordajes al problema, donde el orden de los elementos no es importante y donde existen varias variables, a cada una de las cuales debemos asignarle un valor de acuerdo a las restricciones dadas. Es una estrategia algorítmica de encontrar todas las soluciones posibles basadas en un conjunto dado de variables iniciales para encontrar el resultado especificado por el problema. Las soluciones erradas son descartadas.

![image](https://user-images.githubusercontent.com/60924631/194178917-22a06f55-af61-4bcd-99a8-d0effa0bfe62.png)

- [Codigo](https://github.com/PaulLandaeta/algoritmica2/blob/master/contenido/Backtracking/8queen.cpp)


###### Referencias

- [Codigo de ejemplo](https://github.com/PaulLandaeta/algoritmica2)
- [Estructuras](https://www.geeksforgeeks.org/)
- [Conceptos](https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/video_galleries/lecture-videos/)




