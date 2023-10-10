#include <stdio.h>
#include <stdlib.h>

int main(int ac,char **av)
{
while(*av != NULL){
printf("argument = %s\n",*av);
*av++;
}
return (0);
}