# Notes

## fgets
char *fgets(char *s, int size, FILE *stream)

- Reads until newline or EOF
- Includes '\n' in buffer
- Always null-terminated

## fork
- Returns 0 in child
- Returns child PID in parent
- Returns -1 on error

### strcspn()

Used to remove newline added by fgets().

strcspn(str, reject) returns the index of the first occurrence
of any character in reject.

Example:
line[strcspn(line, "\n")] = '\0';

This safely trims the newline without scanning manually.
