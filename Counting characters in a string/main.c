#include <stdio.h>
void main()
{
    char string[100];
    int i,count=0;
    printf("Enter a string: \n");
    scanf("%s",string);
    for (i=0;string[i]!='\0';i++)
        count++;
    printf("The count of characters is %d\n",count);

}

