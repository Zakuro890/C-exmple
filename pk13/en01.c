#include <stdio.h>
    
   struct  Parson{
       char name[100];
       int age;
       char gender;
   };
int main(void){
   struct Parson p1;
   printf("名前：");
   scanf("%s",&p1.name);
   printf("年齢は：");
   scanf("%d",&p1.age);
   printf("性別は(M or F)：");
   scanf("\n%c",&p1.gender);
   printf("name=%s,age=%d,gender=%c",p1.name,p1.age,p1.gender);

   return 0;
}