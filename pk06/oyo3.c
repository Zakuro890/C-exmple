#include <stdio.h>
int main(void){
    float fnum = 1.0e15;
    int inum;
    printf("fnum=%e\n",fnum);
    inum = fnum;
    fnum = inum;
    printf("fnum=%e\n",fnum);
    return 0;
}