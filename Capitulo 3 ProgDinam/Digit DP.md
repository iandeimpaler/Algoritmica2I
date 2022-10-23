# Digit DP

## Definicion

Hay muchos tipos de problemas que piden contar el número de enteros ' x ' entre dos enteros, digamos ' a ' y ' b ' tales que x satisface una propiedad específica que se puede relacionar con sus dígitos.
Entonces, si decimos que G(x) indica el número de tales enteros entre 1 y x (inclusive), entonces el número de tales enteros entre a y b puede ser dado por G(b) – G(a-1) . Aquí es cuando Digit DP (Programación Dinámica) entra en acción. Todos los problemas de conteo de enteros que satisfacen la propiedad anterior se pueden resolver mediante el método de DP de dígitos.

## Complejidad

hay un total de estados idx*sum*tight y estamos realizando de 0 a 9 iteraciones para visitar cada estado. Por lo tanto, la complejidad del tiempo será O(10*idx*sum*tight) . Aquí, observamos que tight = 2 e idx pueden tener un máximo de 18 para un entero sin signo de 64 bits y, además, la suma será un máximo de 9*18 ~ 200. Por lo tanto, en general tenemos 10*18*200*2 ~ 10^5 iteraciones que se puede ejecutar fácilmente en 0,01 segundos.

[Codigo]()
