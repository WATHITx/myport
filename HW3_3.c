//Wathit Tritsananawakit 67070503495
#include <stdio.h>

int main(void) {
  float score;
  scanf("%f",&score);
  if (score <0 || score > 100){
    printf("Invalid score!");
    return 0;
  }
  if(score>=90 && score<=100){
    printf("A");
  }
  if(score>=85 && score<=89){
    printf("B+");
  }
  if(score>=80 && score<=84){
    printf("B");
  }
  if(score>=75 && score<=79){
    printf("C+");
  }
  if(score>=70 && score<=74){
    printf("C");
  }
  if(score>=65 && score<=69){
    printf("D+");
  }
  if(score>=60 && score<=64){
    printf("D");
  }
  if(score <60){
    printf("F");
  }
}
