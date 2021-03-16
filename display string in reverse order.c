# include<stdio.h>
void reversestr(char *str)
{
  if(*str=='\0')
    return;
  reversestr(1+str);
  printf("\n%c",*str);





}






int main()
{
 char str[100];
 printf("\nsenter string");
 scanf("%s",str);
 reversestr(str);

 return;

}




