#include <stdio.h>
#include<string.h>
int main() {
char string[20],ch;
printf("Enter the string ");
gets(string);
int count = 0;
printf("Enter character to find its frequnecy: ");
scanf("%c",&ch);
for(int i=0;string[i]!='\0';i++)
{
    if(ch == string[i])
    count++;
}
printf("Frequency is %d",count);
    return 0;
}