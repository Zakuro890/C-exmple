#include <stdio.h>
int main(void){
char str1[15] = "Hello";
char str2[15] = "World!";
char str3[30];
int i,j;
for(i=0;str1[i]!='0';i++){
    str3[i]=str1[i];
}
for(j=0;str2[j]!='0';j++){
    str3[i+j]=str2[j];
}
str3[i+j]='0';
printf("str1+str2=%s\n",str3);
return 0;
}