# PRIM

## Definicion

El algoritmo de Kruskal encuentra un bosque de expansión mínimo de un gráfico ponderado por bordes no dirigido . Si el gráfico está conectado , encuentra un árbol de expansión mínimo . (Un árbol de expansión mínimo de un gráfico conectado es un subconjunto de los bordes que forma un árbol que incluye todos los vértices , donde se minimiza la suma de los pesos de todos los bordes del árbol. Para un gráfico desconectado, un bosque de expansión mínimo es compuesto por un árbol de expansión mínimo para cada componente conectado .) Es un algoritmo codicioso en teoría de grafosya que en cada paso agrega el siguiente borde de menor peso que no formará un ciclo al bosque de expansión mínimo.
En otras palabras, el algoritmo encuentra un subconjunto de aristas que forman un árbol con todos los vértices, donde el peso total de todas las aristas en el árbol es el mínimo posible. Si el grafo no es conexo, entonces el algoritmo encontrará el árbol recubridor mínimo para uno de los componentes conexos que forman dicho grafo no conexo.


## Complejidad

Usando una estructura de datos de pila binaria simple , ahora se puede mostrar que el algoritmo de Prim se ejecuta en el tiempo O (| E | log | V |) donde | E | es el número de aristas y | V | es el número de vértices. Utilizando un montón de Fibonacci más sofisticado , esto se puede reducir a O (| E | + | V | log | V |), que es asintóticamente más rápido cuando el gráfico es lo suficientemente denso que | E | es ω (| V |), y el tiempo lineal cuando | E | es al menos | V | log | V |. Para gráficos de densidad aún mayor (que tienen al menos | V | c bordes para algunos c  > 1),

![image](https://user-images.githubusercontent.com/60924631/197424889-7d2f54d3-819b-41e1-8250-4c728b9e6d92.png)

[Codigo](https://github.com/iandeimpaler/Algoritmica2I/tree/main/Codigo%20Ejemplo/PRIM)
