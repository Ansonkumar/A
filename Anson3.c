#include<stdio.h>
int main();
{
char a;
ptintf("Enter a character: ");
scanf("%c"&a);
if((a<='a' && a>='z')||(a<='A' && a>='Z'))
printf("%c a is an alphabet" ,a);
else
printf("%c a in not an alphabet" ,a);
return 0;
}
