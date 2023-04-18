#include <stdio.h>
#include<string.h>
int decimalvalue(char roman)
{
 switch(roman)
 {
   case 'I': return 1;
   case 'V': return 5;
   case 'X': return 10;
   case 'L': return 50;
   case 'C': return 100;
   case 'D': return 500;
   case 'M': return 1000;
 }
}
int roman_to_int(char str[])
{
int i, length, result=0, prev_value=0;
length=strlen(str)-1;

for( i=length; i>=0; i--)
{
 if( decimalvalue(str[i]) >= prev_value)
  result = result + decimalvalue(str[i]);
 else
  result = result - decimalvalue(str[i]);

prev_value = decimalvalue(str[i]);
}
return result;
}
int main() {
  char str[20];
  int num;
  printf("Enter string: ");
  gets(str);
  num=roman_to_int(str);
  printf("the result is %d",num);
  return 0;
}