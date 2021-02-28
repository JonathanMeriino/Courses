MEMORIA ESTATICA

Consideraciones 
ü  Error en tiempo de ejecución de índice fuera del rango.
ü  Se debe conocer con anticipación el tamaño de la estructura.
ü  Se guardan en memorias adyacentes.
ü  Vectores, matrices, cubos, registros,  archivos.
Ventajas
·         La velocidad de acceso es alta.
·         Para retener los datos solo necesita estar energizada.
·         Lógica simple.
Son más fáciles de diseñar.
Desventajas:
ü  No se puede modificar el tamaño de la estructura en tiempo de ejecucion.
ü  No es óptimo con grandes cantidades de datos.
ü  Desperdicio de memoria cuando no se utiliza en su totalidad  del tamaño  v[100]  .
ü  Menor capacidad, debido a que cada celda de almacenamiento requiere más transistores.
ü  Mayor costo por bit.
ü  Mayor consumo de Potencia

MEMORIA DIANMICA

VENTAJAS:
ü  Es posible disponer de un espacio de memoria arbitrario que dependa de información 
dinámica (disponible sólo en ejecución): Toda esa memoria que maneja es implementada 
por el programador cuando fuese necesario.
ü  Otra ventaja de la memoria dinámica es que se puede ir incrementando durante la 
ejecución del programa. Esto permite, por ejemplo, trabajar con arreglos dinámicos.
ü  Es memoria que se reserva en tiempo de ejecución. Su tamaño puede variar durante 
la ejecución del programa y puede ser liberado mediante la función free.

DESVENTAJAS:
ü  Es difícil de implementar en el desarrollo de un programa o aplicación.
ü  Es difícil implementar estructuras de datos complejas como son los tipos recursivos 
(árboles, grafos, etc.).Por ello necesitamos una forma para solicitar y liberar 
memoria para nuevas variables que puedan ser necesarias durante la ejecución de 
nuestros programas: Heap.
ü  Una desventaja de la memoria dinámica es que es más difícil de manejar.
ü  La memoria dinámica puede afectar el rendimiento. Puesto que con la memoria 
estática el tamaño de las variables se conoce en tiempo de compilación, esta 
información está incluida en el código objeto generado. Cuando se reserva memoria 
de manera dinámica,
ü  Se tienen que llevar a cabo varias tareas, como buscar un bloque de memoria libre 
y almacenar la posición y tamaño de la memoria asignada, de manera que pueda ser 
liberada más adelante. Todo esto representa una carga adicional, aunque esto depende 
de la implementación y hay técnicas para reducir su impacto.  