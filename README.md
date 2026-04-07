## Ejercicio 2 - Punto 2

### ¿Qué es .gitignore?

El archivo .gitignore permite indicar qué archivos o carpetas no deben ser incluidos en el repositorio de Git.

### ¿Por qué es conveniente incluirlo?

Es conveniente porque evita subir archivos innecesarios como ejecutables, archivos temporales o configuraciones personales, manteniendo el repositorio limpio.

### ¿Cuándo se debe hacer?

Se recomienda crearlo al inicio del proyecto, aunque puede agregarse en cualquier momento.

### ¿Cómo se configura?

Se crea un archivo llamado .gitignore y dentro se escriben las reglas indicando qué archivos ignorar.

Ejemplo:

\*.exe
\*.o
.vscode/
ignorado.txt





\### Código sin funcionar



Se encontraron los siguientes errores:



\- Falta de inclusión de la librería stdio.h

\- Uso incorrecto de scanf en valor1 (faltaba el operador \&)

\- Falta de punto y coma en la declaración de la suma

\- Falta de punto y coma en el return

\- Error lógico en la función duplicar\_numero (paso por valor en lugar de referencia)



Soluciones aplicadas:



\- Se agregó #include <stdio.h>

\- Se corrigió scanf utilizando \&valor1

\- Se agregaron los puntos y coma faltantes

\- Se modificó la función duplicar\_numero para recibir un puntero

\- Se utilizó \* para modificar el valor original de la variable





\### Código misterioso



El programa realiza una serie de transformaciones sobre un número entero.



Primero invierte sus dígitos, luego divide el resultado por 2 y finalmente le suma la suma de sus dígitos.



Durante la depuración se observó cómo el valor iba cambiando en cada función:

452 → 254 → 127 → 137

