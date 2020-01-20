#include <stdio.h>
#define    SIZE    1000

// Variables for quotes
int double_quotes, single_quotes;

// Variables for braces and parenthesis
int brace, paren;

void in_comment(char string[]);
void in_quote(char string[]);
void in_braces(char string[]);
 
int main(void)
{
  extern int double_quotes, single_quotes;
  char string[SIZE];
  int c;
  int i = 0;

  while ((c = getchar()) != EOF)
    string[i++] = c;

  string[i] = '\0';

  printf("%s", string);
  
  /* checking if any exist there */
  in_comment(string);

  /* make sure we have quotes either double or ordinary */
  in_quote(string);

  /* Checking every quote in the world */
  in_braces(string);
}

void in_comment(char string[])
{
  int i;

  for (i = 0; string[i] != '\0'; ++i) {
    if (string[i] == '/' && string[i+1] == '/')
      for (i += 2; string[i++] != '\n';)
	;
    else if (string[i] == '/' && string[i+1] == '*') {
      for (i += 2; string[i] != '*' && string[i+1] != '/'; ++i)
	;
      i += 2;
    }
  }
}

void in_quote(char string[])
{
  extern int double_quotes, single_quotes;
  int i;
  i  = double_quotes = single_quotes = 0;
  while (string[i] != '\0') {
    if (string[i] == '"')
      ++double_quotes;
    else if (string[i] == '\'')
      ++single_quotes;
    
    ++i;
  }

  if (double_quotes % 2 != 0)
    printf("%s\n", "Mismatched double quote");
  
  if (single_quotes % 2 != 0)
    printf("%s\n", "Mismatched single quote");
}

void in_braces(char string[])
{
  extern int brace, paren;
  int i;
 
  for (i = paren = brace = 0; string[i] != '\0'; ++i) {
    /* if we have found a parentheses, we increment the variable */
    if (string[i] == '(')
      ++paren;
    
    /* and if you have found closing parentheses, we decrement our incremented variable */
    else if (string[i] == ')')
      --paren;

    /* the same thing here, but with braces */
    else if (string[i] == '{')
      ++brace;
    else if (string[i] == '}')
      --brace;
  }
  
  while (paren > 0) {
    printf("%s\n", "Mismatched parentheses");
    --paren;
  }

  while (brace > 0) {
    printf("%s\n", "Mismatched brace");
    --brace;
  }
}
