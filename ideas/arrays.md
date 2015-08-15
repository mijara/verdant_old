- El array por defecto funciona como un vector, lo que implica tener métodos para agregar al final, etc.
- Si el array es creado con un tamaño inicial, se toma como un Array normal, es decir, no variará en tamaño.
- Adicionalmente, si el array es creado como un ArrayList y luego se desea cerrar, se puede llamar al método
`lock`, el cual cerrará la lista, transformandola a un array normal.
    * Esto implica métodos para saber si el array está cerrado o no.
