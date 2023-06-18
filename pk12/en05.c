#include <stdio.h>
#define NUM 9
int main(void){
  int i = 0;
  int j = 0;

  int data[NUM][NUM];

  //九九データの格納
  for(i = 0; i < NUM; i++){
    for(j = 0; j < NUM; j++){
      data[i][j] = (i + 1) * (j + 1);
    }
  }
  for(i = 0; i < NUM; i++){
    for(j = 0; j < NUM; j++){
      
      printf("%3d", data[i][j]); 
    }
    printf("\n");
  }
  return 0;
}