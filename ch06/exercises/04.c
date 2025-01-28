/*
Which one of the following statements is not equivalent to the other two (assuming that the
loop bodies are the same)?

(a) for (i = 0; i < 10; i++) … 0,1...9
(b) for (i = 0; i < 10; ++i) … 0,1...9
(c) for (i = 0; i++ < 10; ) … 1,2...10
*/

/* Output:
La opcion c, porque el for, inicializa en 0 y luego evalua la condicion i++, 
si i es 0 cuando es comparado con 10 es 0, pero cuando continua a la instruccion printf, su valor se incrementa en 1 

Explicacion mas detallada @fordea#github 
When the for statement is executed it performs steps in a particular order:
1: It initializes any variables in the initializer(s) expression if this is the first execution.
2: It performs a conditional expression to ensure the termination condition isn't met.
3: It executed the loop body provided the conditional expression in step 2 evaluated to false.
4: It modifies the variables as specified in the loop counter(s) condition.
*/