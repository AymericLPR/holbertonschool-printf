# Description

The function printf sends formatted output to stdout. Basically, this idea behind this function is to provide a string of characters that need to be printed as it is in the program.

## Declaration

Following is the declaration for printf() function.

```bash
int printf(const char *format, ...)
```

## Files Usages

```python
1. _printf.1
# man ./_printf.1 to access manual
2. _printf.c
Main Function
3. _putchar.c
Writes the character c to stdout
4. functions.c
# int print_c(va_list args)
Used to print _putchar, so character c.

# int print_s(va_list args)
Used to print a string, using _putchar.

# int print_percent(va_list args)
Used to detect and to print if %

# int print_d(va_list args)
Used to print decimal using _putchar

# int print_i(va_list args)
Used to print integers returning print_d function

5. get_func.C
Pointer to functions checking for them.
6. main.h
- Include library needed.
- Struct
- All the functions prototypes needed.



```

## Parameters

c : character | d or i : decimal integer | s : string of characters | % : character 