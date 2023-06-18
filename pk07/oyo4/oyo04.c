#include <stdio.h>

int main(void){
    int n;
    printf("整数：");
    scanf("%d",&n);
    if (n % 3 == 0) {
      printf("%dは「3の倍数」です．\n",n);
    } else if (n % 3 == 1) {
      printf("%dは「3の倍数+1」です．\n",n);
    } else {
      printf("%dは「3の倍数+2」です．\n",n);
    }

    return 0;
}