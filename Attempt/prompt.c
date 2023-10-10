#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char *line = NULL;
size_t n = 0;

printf("$");

getline(&line, &n, stdin);
printf("%s\n",line);

free(line);
return(0);
}