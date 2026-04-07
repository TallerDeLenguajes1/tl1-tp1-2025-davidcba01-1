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

*.exe
*.o
.vscode/
ignorado.txt
