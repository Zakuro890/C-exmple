#include <stdio.h>

typedef struct Person {
    char name[100];
    int age;
    char gender;
} Person;

typedef struct Couple {
    Person boy;
    Person girl;
} Couple;

int main(void)
{
    Person ichiro = {"Ichiro",20,'M'};
    Person hanako = {"Hanako",19,'F'};
    Couple c1;
    c1.boy = ichiro;
    c1.girl = hanako;

    printf("Couple:\n");
    printf("  boy:{name=%s,age=%d,gender=%c}\n",
           c1.boy.name,c1.boy.age,c1.boy.gender);
    printf("  girl:{name=%s,age=%d,gender=%c}\n",
           c1.girl.name,c1.girl.age,c1.girl.gender);

    return 0;
}