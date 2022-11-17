# Description

The function printf sends formatted output to stdout. Basically, this idea behind this function is to provide a string of characters that need to be printed as it is in the program.

# Declaration

Following is the declaration for printf() function.

```bash
int printf(const char *format, ...)
```

![Alt text](https://i.goopics.net/bqlgjr.png "Flowchart")

# Files Usages

### _printf.1
man ./_printf.1 to access manual

### _printf.c
Main Function

### _putchar.c
Writes the character c to stdout

### functions.c
```bash
int print_c(va_list args)
```
Used to print _putchar, so character c.
```bash
int print_s(va_list args)
```
Used to print a string, using _putchar.
```bash
int print_percent(va_list args)
```
Used to detect and to print if %
```bash
int print_d(va_list args)
```
Used to print decimal using _putchar
```bash
int print_i(va_list args)
```
Used to print integers returning print_d function

### get_func.c
Pointer to functions checking for them.

### main.h
- Include library needed.
- Struct
- All the functions prototypes needed.


# Parameters

c : character | d or i : decimal integer | s : string of characters | % : character 