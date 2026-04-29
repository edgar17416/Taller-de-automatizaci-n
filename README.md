# Taller-de-automatizacio-n
Este programa implementa aproximaciones matemáticas utilizando series de Taylor. Permite calcular:

Exponencial: e^x
Seno: sin(x)
Coseno: cos(x)

El usuario ingresa un valor de x y el número de términos n para obtener una aproximación de cada función.

Archivos del proyecto
taylor.c → Código fuente principal
Makefile → Archivo para compilar automáticamente el programa
Requisitos
Compilador GCC
Sistema operativo Linux, macOS o Windows (con entorno compatible como WSL o MinGW)
Compilación

Para compilar el programa, ejecutar en la terminal:

make
Ejecución

Una vez compilado, ejecutar:

./taylor
Limpieza

Para eliminar el ejecutable generado:

make clean
Ejemplo de uso

Entrada:

Valor de x: 1
Numero de terminos: 10

Salida esperada:

e^x ≈ 2.718282
sin(x) ≈ 0.841471
cos(x) ≈ 0.540302
A mayor número de términos, mayor precisión en los resultados.
El programa utiliza implementaciones propias de factorial y potencia.
