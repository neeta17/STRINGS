# include<stdio.h>


char *strreverse(char *p1,char *p2)
{
char temp;
if(*p2=='\0')
return p1;
p1=strreverse(p1,p2+1);
if(p1<p2)
{temp=*p1;
*p1=*p2;
*p2=temp;

}
return (p1+1);

}

void reversestr(char *str)
{

  strreverse(str,str);
}

int main()
{
 char str[100];
 printf("\nsenter string");
 scanf("%s",str);
 reversestr(str);
 printf("%s",str);

 return;

}



