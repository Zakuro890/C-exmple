#include <stdio.h>
    
   struct  Parson{
       char name[100];
       int age;
       char gender;
   };
int main(void){
   struct Parson p1;
   printf("���O�F");
   scanf("%s",&p1.name);
   printf("�N��́F");
   scanf("%d",&p1.age);
   printf("���ʂ�(M or F)�F");
   scanf("\n%c",&p1.gender);
   printf("name=%s,age=%d,gender=%c",p1.name,p1.age,p1.gender);

   return 0;
}