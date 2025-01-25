/*
Are the following if statements equivalent? If not, why not?

if (score >= 90) printf("A");
else if (score >= 80) printf("B");
else if (score >= 70) printf("C");
else if (score >= 60) printf("D");
else printf("F");

if (score < 60) printf("F");
else if (score < 70) printf("D");
else if (score < 80) printf("C");
else if (score < 90) printf("B");
else printf("A");

Si ambas expresiones son equivalentes

if statement one:                       if statement two:
90 to positive infinity: A              negative infinity to 59: F
               80 to 89: B                             60 to 69: D
               70 to 79: C                             70 to 79: C
               60 to 69: D                             80 to 89: B
negative infinity to 59: F              90 to positive infinity: A
*/
