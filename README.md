# The C Programming Language Solutions
Provide high quality solutions to the exercises in "The C Programming Language" by Kernighan and Ritchie (2nd edition), also referred to as "K&R C Bible".


## Table of Contents

* [Chapter 1. A Tutorial Introduction](#chapter-1-a-tutorial-introduction)
* [Chapter 2. Types, Operators, and Expressions](#chapter-2-types-operators-and-expressions)
* [Chapter 3. Control Flow](#chapter-3-control-flow)
* [Chapter 4. Functions and Program Structure](#chapter-4-functions-and-program-structure)
* [Chapter 5. Pointers and Arrays](#chapter-5-pointers-and-arrays)


## Chapter 1. A Tutorial Introduction

* Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. [solution](Chapter1/exercise1-9.c)
* Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \\t, each backspace by \\b, and each backslash by \\\\. This makes tabs and backspaces visible in an unambiguous way. [solution](Chapter1/exercise1-10.c)
* Exercise 1-12. Write a program that prints its input one word per line. [solution](Chapter1/exercise1-12.c)
* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientations is more challenging. [solution](Chapter1/exercise1-13.c)
* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input. [solution](Chapter1/exercise1-14.c)
* Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion. [solution](Chapter1/exercise1-15.c)
* Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print the lenght of arbitrarily long input lines, and as much as possilbe of the text. [solution](Chapter1/exercise1-16.c)
* Exercise 1-17. Write a program to print all input lines that are longer than 80 characters. [solution](Chapter1/exercise1-17.c)
* Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and to delete entriely blank lines. [solution](Chapter1/exercise1-18.c)
* Exercise 1-19. Write a function `reverse(s)` that reverses the character string `s`. Use it to write a program that reverses its input a line at a time. [solution](Chapter1/exercise1-19.c)
* Exercise 1-20. Write a program `detab` that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every `n` columns. Should `n` be a variable or symbolic parameter? [solution](Chapter1/exercise1-20.c)
* Exercise 1-21. Write a program `entab` that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for `detab`. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?
* Exercise 1-22. Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the `n`-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column.
* Exercise 1-23. Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments do not nest.
* Exercise 1-24. Write a program to check a C program for rudimentary syntax errors like unbalanced parentheses, brackets and braces. Don't forget about quotes, both single and double, escape sequences, and comments. (This program is hard if you do it in full generality.)


## Chapter 2. Types, Operators, and Expressions

* Exercise 2-1. Write a program to determine the ranges of `char`, `short`, `int`, and long variables, both `signed` and `unsigned`, by printing appropriate values from standard hearders and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types. [solution](Chapter2/exercise2-1.c)
* Exercise 2-2. Write a loop equivalent to the `for` loop above without using `&&` or `||`. [solution](Chapter2/exercise2-2.c)
* Exercise 2-3. Write the function `htoi(s)`, which converts a string of hexadecimal digits (including an optional `0x` or `0X`) into its equivalent integer value. The allowable digits are `0` through `9`, `a` through `f`, and `A` through `F`. [solution](Chapter2/exercise2-3.c)
* Exercise 2-4. Write an alternate version of `squeeze(s1, s2)` that deletes each character in `s1` that matches any character in the string `s2`. [solution](Chapter2/exercise2-4.c)
* Exercise 2-5. Write the function `any(s1, s1)`, which returns the first location in the string `s1` where any character from the string `s2` occurs, or `-1` if `s1` contains no characters from `s2`. (The standard library function `strpbrk` does the same job but returns a pointer to the location.) [solution](Chapter2/exercise2-5.c)
* Exercise 2-6. Write a function `setbits(x, p, n, y)` that returns `x` with the `n` bits that begin at position `p` set to the rightmost `n` bits of `y`, leaving the other bits unchanged. [solution](Chapter2/exercise2-6.c)
* Exercise 2-7. Write a function `invert(x, p, n)` that return `x` with the `n` bits that begin at position `p` inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged. [solution](Chapter2/exercise2-7.c)
* Exercise 2-8. Write a function `rightrot(x, n)` that returns the value of the integer `x` rotated to the right by `n` bit positions.
* Exercise 2-9. In a two's complement number system, `x &= (x - 1)` deletes the rightmost 1-bit in `x`. Explain why. Use this observation to write a faster version of `bitcount`. [solution](Chapter2/exercise2-9.c)
* Exercise 2-10. Rewrite the function `lower`, which converts the upper case letters to lower case, with a conditional expression instead of `if-else`. [solution](Chapter2/exercise2-10.c)


## Chapter 3. Control Flow

* Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside). Write a version with only one test inside the loop and measure the difference in run-time. [solution](Chapter3/exercise3-1.c)
* Exercise 3-2. Write a function `escape(s, t)` that converts characters like newline and tab into visible escape sequences like `\n` and `\t` as it copies the string `t` to `s`. Use a `switch`. Write a function for the other direction as well, coverting escape sequences into the real characters. [solution](Chapter3/exercise3-2.c)
* Exercise 3-3. Write a function `expand(s1, s2)` that expands shorhand notations like `a-z` in the string `s1` into the equivalent complete list `abc...xyz` in `s2`. Allow for letters of either case and digits, and be prepared to handle cases like `a-b-c` and `a-z0-9` and `-a-z`. Arrange that a leading or trailing `-` is taken literally. [solution](Chapter3/exercise3-3.c)
* Exercise 3-4. In a two's complement number representation, our version of `itoa` does not handle the largest negative number, that is, the value of `n` equal to `-(2^{wordsize-1})`. Explain why not. Modify it to print that value correctly, regardless of the machine on which it runs. [solution](Chapter3/exercise3-4.c)
* Exercise 3-5. Write the function `itob(n, s, b)` that converts the integer `n` into a base `b` character representation in the string `s`. In particalar, `itob(n, s, 16)` formats `n` as a hexadecimal integer in `s`. [solution](Chapter3/exercise3-5.c)
* Exercise 3-6. Write a version of `itoa` that accepts three arguments instead of two. The third argument is a minimum field width; the converted number must be padded with blanks on the left if necessary to make it wide enough. [solution](Chapter3/exercise3-6.c)


## Chapter 4. Functions and Program Structure

* Exercise 4-1. Write the function `strrindex(s, t)`, which returns the position of the **rightmost** occurrence of `t` in `s`, or `-1` if there is none. [solution](Chapter4/exercise4-1.c)
* Exercise 4-2. Extend `atof` to handle scientific notation of the form `123.45e-6` where a floating-point number may be followed by `e` or `E` and an optionally signed exponent. [solution](Chapter4/exercise4-2.c)
* Exercise 4-3. Given the basic framework, it's straightforward to extend the calculator. Add the modulus (`%`) and provisions for negative numbers. [solution](Chapter4/exercise4-3.c)
* Exercise 4-4. Add commands to print the top element of the stack without poping, to duplicate it, and to swap the top two elements. Add a command to clear the stack. [solution](Chapter4/exercise4-4.c)
* Exercise 4-5. Add access to library functions like `sin`, `exp` and `pow`. See `<math.h>` in Appendix B, Section 4. [solution](Chapter4/exercise4-5.c)
* Exercise 4-6. Add commands for handling variables. (It's easy to provide twenty-six variables with single-letter names.) Add a variable for the most recently printed value.
* Exercise 4-7. Write a routine `ungets` that will push back an entire string onto the input. Should `ungets` know about `buf` and `bufp`, or should it just use `ungetch`?
* Exercise 4-8. Supppose that there will never be more than one character of pushback. Modify `getch` and `ungetch` accordingly.
* Exercise 4-9. Our `getch` and `ungetch` do not handle a pushed-back `EOF` correctly. Decide what their properties ougth to be if an `EOF` is pushed back, then implement your design.
* Exercise 4-10. An alternative organization uses `getline` to read an entire input line; this makes `getch` and `ungetch` unnecessary. Revise the calculator to use this appproach.
* Exercise 4-11. Modify `getop` so that it doesn't need to use `ungetch`. Hint: use an internal `static` variable. [solution](Chapter4/exercise4-11.c)
* Exercise 4-12. Adapt the ideas of `printd` to write a recursive version of `itoa`; that is, convert an integer into a string by calling a recursive routine. [solution](Chapter4/exercise4-12.c)
* Exercise 4-13. Write a recursive version of the function `reverse(s)`, which reverse the string `s` in place. [solution](Chapter4/exercise4-13.c)
* Exercise 4-14. Define a macro `swap(t, x, y)` that interchanges two arguments of type `t`. (Block structure will help.) [solution](Chapter4/exercise4-14.c)


## Chapter 5. Pointers and Arrays

* Exercise 5-1. As written, `getint` treats a `+` or `-` not followed by a digit as a valid representation of zero. Fix it to push such a character back on the input. [solution](Chapter5/exercise5-1.c)
* Exercise 5-2. Write `getfloat`, the floating-point analog of `getint`. What type does `getfloat` return as its function value? [solution](Chapter5/exercise5-2.c)
* Exercise 5-3. Write a pointer version of the function `strcat` that we showed in Chapter 2: `strcat(s, t)` copies the string `t` to the end of `s`.
* Exercise 5-4. Write the function `strend(s, t)`, which returns 1 if the string `t` occurs at the end of the string `s`, and zero otherwise.
* Exercise 5-5. Write the version of the library functions `strncpy`, `strncat`, and `strncmp`, which operate on at most the first `n` characters of their arguement strings. For example, `strncpy(s, t, n)` copies at most `n` characters of `t` to `s`. Full descriptions are in Appendix B.
* Exercise 5-6. Rewrite appropriate programs from earlier chapters and exercises with ponters instead of array indexing. Good possibilites include `getline` (Chapter 1 and 4), `atoi`, `itoa`, and their variants (Chapter 2, 3, and 4), `reverse` (Chapter 3), and `strindex` and `getop` (Chapter 4).

