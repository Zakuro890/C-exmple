#include <stdio.h>
typedef struct Book {
    char title[100];
    int value;
    int pages;
} Book;

int main(void){
    Book b = {"Bible",1365,687};
    printf("{title=%s,value=%d,pages=%d}\n",
           b.title,b.value,b.pages);

    return 0;
}