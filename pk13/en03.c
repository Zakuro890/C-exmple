#include <stdio.h>
#define NUM 100

typedef struct Person {
    char name[NUM];
    int age;
    char gender;
} Person;

int main(void)
{
    printf("%d, %d\n",NUM,sizeof(Person));

    return 0;
}