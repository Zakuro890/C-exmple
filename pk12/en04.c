#include <stdio.h>
int main(void){
  char str[100];
 
  printf("文字列を入力 > ");
  scanf("%s", str);
 int i;
  for(i=0;i<=strlen(str);i++){
    if(str[i]>=97&&str[i]<=122)
      str[i]=str[i]-32;
  }
  printf("変換した文字列 = %s\n", str);
 
  return 0;
}
