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



\### Punto 4.g



En los apartados 2 y 3 se obtiene el mismo resultado porque:



\- En el punto 2 se muestra la dirección de memoria almacenada en el puntero.

\- En el punto 3 se muestra la dirección de memoria de la variable.



Ambos valores coinciden porque el puntero fue inicializado con la dirección de la variable, es decir:



p = \&x



Por lo tanto, el puntero almacena exactamente la misma dirección de memoria que la variable.



En el punto 4 se obtiene la dirección de memoria del puntero, la cual es diferente a las anteriores porque el puntero también es una variable y ocupa su propio espacio en memoria.



En conclusión:



\- p y \&x representan la misma dirección.

\- \&p representa una dirección distinta, ya que corresponde al puntero en sí mismo.

