# Busqueda Binaria 

## Definicion 

Para entender cómo funciona se hace necesario resolver el problema de encontrar un elemento en un arreglo ordenado. Seleccionamos el elemento que se encuentra en la mitad del arreglo y comprobamos si es el que se está buscando, en el caso de ser el deseado pues damos por terminada la búsqueda, si no, se comprueba si es menor que el elemento en que se encuentra la búsqueda y por tanto significa que es necesario seguir buscando en la mitad menor a dicho elemento o en caso contrario, hacia la sección mayor. Esta operación se repite hasta que sea encontrado el elemento. Como en la operación antes descrita se va desechando la mitad del grupo de búsqueda, pues en el peor de los casos se realizan log_2n como máximo para encontrar el elemento.

## Complejidad

La característica más importante del algoritmo, es la optimización tanto en tiempo como en memoria. Uno de los problemas más clásicos que se resuelven con la Búsqueda Binaria, es encontrar un elemento en un listado ordenado, con una complejidad computacional logarítmica O(logN)O(logN). Es importante denotar que el arreglo debe estar ordenado, ya que es imprescindible que el espacio de búsqueda donde se aplique el algoritmo sea monótono (creciente o decreciente).

