# The C Programming Language Solutions
Provide high quality solutions to the exercises in "The C Programming Language" by Kernighan and Ritchie (2nd edition), also referred to as "K&R C Bible".

## Table of Contents

* [Chapter 1. A Tutorial Introduction](#chapter-1-a-tutorial-introduction)
* [Chapter 2. Types, Operators, and Expressions](#chapter-2-types-operators-expressions)

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
* Exercise 1-21. Write a program `entab` that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for `detab`. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference? [solution](Chapter1/exercise1-21.c)
* Exercise 1-22. Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the `n`-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column. [solution](Chapter1/exercise1-22.c)
* Exercise 1-23. Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments do not nest. [solution](Chapter1/exercise1-23.c)
* Exercise 1-24. Write a program to check a C program for rudimentary syntax errors like unbalanced parentheses, brackets and braces. Don't forget about quotes, both single and double, escape sequences, and comments. (This program is hard if you do it in full generality.) [solution](Chapter1/exercise1-24.c)

## Chapter 2. Types, Operators, and Expressions

* Exercise 2-1. Write a program to determine the ranges of `char`, `short`, `int`, and long variables, both `signed` and `unsigned`, by printing appropriate values from standard hearders and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types. [solution](Chapter2/exercise2-1.c)
