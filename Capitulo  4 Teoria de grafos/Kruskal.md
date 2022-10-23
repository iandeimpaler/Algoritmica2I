# Kruskal

##  Definicion

El algoritmo de Kruskal es un algoritmo de la teoría de grafos para encontrar un árbol recubridor mínimo en un grafo conexo y ponderado. Es decir, busca un subconjunto de aristas que, formando un árbol, incluyen todos los vértices y donde el valor total de todas las aristas del árbol es el mínimo. Si el grafo no es conexo, entonces busca un bosque expandido mínimo (un árbol expandido mínimo para cada componente conexa). El algoritmo de Kruskal es un ejemplo de algoritmo voraz.

Funciona de la siguiente manera:

se crea un bosque B (un conjunto de árboles), donde cada vértice del grafo es un árbol separado
se crea un conjunto C que contenga a todas las aristas del grafo
mientras C es no vacío
eliminar una arista de peso mínimo de C
si esa arista conecta dos árboles diferentes se añade al bosque, combinando los dos árboles en un solo árbol
en caso contrario, se desecha la arista
Al acabar el algoritmo, el bosque tiene un solo componente, el cual forma un árbol de expansión mínimo del grafo.

## Complejidad

m el número de aristas del grafo y n el número de vértices, el algoritmo de Kruskal muestra una complejidad O(m log m) o, equivalentemente, O(m log n), cuando se ejecuta sobre estructuras de datos simples. Los tiempos de ejecución son equivalentes porque:

m es a lo sumo n2 y log n2 = 2logn es O(log n).
ignorando los vértices aislados, los cuales forman su propia componente del árbol de expansión mínimo, n ≤ 2m, así que log n es O(log m).
Se puede conseguir esta complejidad de la siguiente manera: primero se ordenan las aristas por su peso usando una ordenación por comparación (comparison sort) con una complejidad del orden de O(m log m); esto permite que el paso "eliminar una arista de peso mínimo de C" se ejecute en tiempo constante. Lo siguiente es usar una estructura de datos sobre conjuntos disjuntos (disjoint-set data structure) para controlar qué vértices están en qué componentes. Es necesario hacer orden de O(m) operaciones ya que por cada arista hay dos operaciones de búsqueda y posiblemente una unión de conjuntos. Incluso una estructura de datos sobre conjuntos disjuntos simple con uniones por rangos puede ejecutar las operaciones mencionadas en O(m log n). Por tanto, la complejidad total es del orden de O(m log m) = O(m log n).

![image](https://user-images.githubusercontent.com/60924631/197424244-34b729eb-0fcf-42aa-8861-e596b08aee5b.png)

[Codigo](https://github.com/iandeimpaler/Algoritmica2I/blob/main/Codigo%20Ejemplo/Kruskal.cpp)
