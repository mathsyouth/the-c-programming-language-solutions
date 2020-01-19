#include <stdio.h>
#define    EOL    '\n'
#define    SIZE    100

void remove_comments(char string[]);

int main(void)
{
  char string[SIZE];
  int c, i;

  for (i = 0; (c = getchar()) != EOF; ++i)
    string[i] = c;
  string[i] = '\0';
  remove_comments(string);

  printf("%s", string);

  return 0;
}

void remove_comments(char string[])
{
  int i, j;

  for (i = j = 0; string[j];) {
    if (string[j] == '/' && string[j+1] == '/')
      for (j+=2; string[j++] != '\n';)
	;
    else if (string[j] == '/' && string[j+1] == '*') {
      for (j+=2; string[j] != '*' && string[j+1] != '/'; ++j)
	;
      j += 2;
    } else
      string[i++] = string[j++];
  }
  string[i] = '\0';
    
}  
