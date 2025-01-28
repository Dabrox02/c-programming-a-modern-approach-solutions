/*
 Show how to replace a continue statement by an equivalent goto statement.
*/

/*Output:
with continue:
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue; // Skip even numbers
    }
    printf("%d ", i);
}

with goto:
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        goto end_of_loop; // Jump to the label
    }
    printf("%d ", i);

end_of_loop: // Label to skip to
    ; // Empty statement (required for the label)
}

*/