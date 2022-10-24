#  Rod Cutting
## Descripcion del problema

Se da una barra de longitud n. También se proporciona otra tabla, que contiene diferentes tamaños y precios para cada tamaño. Determine el precio máximo cortando la varilla y vendiéndolas en el mercado.
Conseguir el mejor precio haciendo un corte en diferentes posiciones y comparando los precios después de cortar la caña.
Deje que f (n) devuelva el precio máximo posible después de cortar una fila con longitud n. Simplemente podemos escribir la función f(n) así.
f(n) := valor máximo de precio[i]+f(n – i – 1), donde i está en el rango de 0 a (n – 1).

Al final, deberías ser capaz de responder a esto.pregunta profunda: Si hay 2^(N-1) posibilidades, ¿cómo podemos resolverlo en O(N^2)? Esto se enfoca en cómo estamos manejando las posibilidades a través de la Programación Dinámica.


Cada vez que vemos la palabra clave " mínimo ", " máximo ", estos problemas se pueden clasificar en problemas de optimización, debido a su naturaleza de encontrar un valor óptimo para realizar una tarea. Algunos ejemplos de este tipo de problemas incluyen el problema de la mochila, la subsecuencia común más larga, etc. Hay muchas formas de resolver este tipo de problemas, sin embargo, la programación dinámica funciona mejor.

![image](https://user-images.githubusercontent.com/60924631/197427010-685c241b-5971-4401-b65b-7fb299e5e717.png)

###### Complejidad

![image](https://user-images.githubusercontent.com/60924631/197427074-a5f92170-0fe1-4245-bd43-4420ec24f814.png)

[Codigo](https://github.com/iandeimpaler/Algoritmica2I/blob/main/Codigo%20Ejemplo/Rod%20Cutting.cpp)
