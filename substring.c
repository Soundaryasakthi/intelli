#include <stdio.h>
int main()
{
char a[100],*b;
int i,j,k,l,len=0,len2,flag=1,temp;
scanf("%s",a);
b=a;
while(*b!='\0')
{
len++;
b++;
}
len2=len;
for(i=1;i<len2;i++)
{
b=a;
for(j=1;j<=i;j++)
{
temp=len-1;
flag=1;
 for(k=0;k<temp;k++)
 {for(l=k+1;l<temp;l++){
  if(b[k]==b[l])
  {
  flag=0;
  }
  }
 }
 if(flag==1)
 break;
 b++;
}
if(flag==1)
break;
len--;
}
for(i=0;i<len-1;i++)
{
printf("%c",b[i]);
}
    return 0;
}
