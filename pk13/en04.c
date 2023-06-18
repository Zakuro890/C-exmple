#include <stdio.h>
typedef struct Person {
    char name[100];
    int age;
    char gender;
} Person;
int main(void)
{
    int i,j;
    Person tmp;
    Person test[3] = { 
        {"Ichiro",20,'M'},
        {"Jiro",21,'M'},
         {"Hanako",19,'F'} };
    for (i=0;i<2;i++) {
        for (j=i+1;j<3;j++) {
            if (test[i].age > test[j].age) {
                tmp = test[i];
                test[i] = test[j];
                test[j] = tmp;
            }
        }
    }
    for (i=0;i<3;i++) {
        printf("{name=%s,age=%d,gender=%c}\n",
               test[i].name,test[i].age,test[i].gender);
    }
    return 0;
}