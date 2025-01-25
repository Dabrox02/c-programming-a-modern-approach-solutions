/*
Is the following if statement legal?
if (n == 1-10)
 printf("n is between 1 and 10\n");

If so, what does it do when n is equal to 5?
*/

/*
La expresión (n == 1-10) es legal y se resolveria de la siguiente forma 

(n == (1-10)) o (n == (-9))

Para el valor de n = 5 quedaria de la siguiente forma (5 == (1 - 10))
que seria falso 0

Sin embargo, si se busca que la expresion retorne verdadero si el valor esta entre 1 y 10 la forma correcta es

(n >= 1 && n <= 10) // forma correcta
(!(n < 1 || n > 10)) // forma correcta equivalente

*/