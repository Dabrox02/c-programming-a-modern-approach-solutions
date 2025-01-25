/*
Is the following if statement legal?

if (n >= 1 <= 10)
 printf("n is between 1 and 10\n");

If so, what does it do when n is equal to 0?

Si, la expresion es legal, se resolveria de izquierda a derecha de la siguiente forma

((n >= 1) <= 10)

Si n = 0, entonces la expresion (n >= 1) es falsa 0 y (0 <= 10) sera verdadera 1

Sin embargo, esta expresion siempre dara verdadero 1, ya que para cualquier numero n menor o mayor que 1,
dara 0 o 1, y siempre sera menor a 10, para resolver esto quedaria de la siguiente forma 

(n >= 1 && n <=10) // forma correcta

*/