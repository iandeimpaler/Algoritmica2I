# Edit Distance

## Descripción del Problema

Edit distance es una métrica de cadena , es decir, una forma de cuantificar cuán diferentes son dos cadenas (por ejemplo, palabras) entre sí, que se mide contando el número mínimo de operaciones requeridas para transformar una cadena en la otro. Editar distancias encuentra aplicaciones en el procesamiento del lenguaje natural , donde la corrección ortográfica automática puede determinar posibles correcciones para una palabra mal escrita seleccionando palabras de un diccionario que tienen una distancia baja a la palabra en cuestión. En bioinformática , se puede utilizar para cuantificar la similitud del ADN .secuencias, que pueden verse como cadenas de las letras A, C, G y T.

Las diferentes definiciones de Edit distance utilizan diferentes conjuntos de operaciones de cadena. Las operaciones de distancia de Levenshtein son la eliminación, inserción o sustitución de un carácter en la cadena. Siendo la métrica más común, el término distancia de Levenshtein a menudo se usa indistintamente con la Edit distance.

## Análisis de Complejidad
###### Recurrencia 

![image](https://user-images.githubusercontent.com/60924631/197425456-a67a9ae2-590f-4160-999d-8d4a9dfa59a2.png)


La forma directa y recursiva de evaluar esta recurrencia requiere un tiempo exponencial . Por lo tanto, generalmente se calcula utilizando un algoritmo de programación dinámica que comúnmente se acredita a Wagner y Fischer , [7] aunque tiene una historia de invención múltiple. [2] [3] Después de completar el algoritmo de Wagner-Fischer, se puede leer una secuencia mínima de operaciones de edición como un seguimiento de las operaciones utilizadas durante el algoritmo de programación dinámica que comienza en{\displaystyle d_{mn}} d_{mn}.

Este algoritmo tiene una complejidad temporal de Θ( m n ) donde m y n son las longitudes de las cadenas. Cuando se construye la tabla de programación dinámica completa, su complejidad espacial también es Θ( m n ) ; esto se puede mejorar a Θ(min( m , n )) al observar que en cualquier instante, el algoritmo solo requiere dos filas (o dos columnas) en la memoria. Sin embargo, esta optimización hace que sea imposible leer la serie mínima de operaciones de edición. [3] El algoritmo de Hirschberg ofrece una solución de espacio lineal a este problema.


