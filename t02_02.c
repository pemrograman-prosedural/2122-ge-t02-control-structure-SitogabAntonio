// 12S21015 - Sitogab Antonio Octavianus Girsang
// 12S21049 - Jesika Audina Purba

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int pilih;
  scanf("%d", &pilih);
  if(pilih==1){
    printf("\nstaple food");
    printf("\nyou need side dishes");
  }else{
    if(pilih==2){
      printf("\nside dishes");
      printf("\nstaple food");
      printf("\nyou need vegetables");
    }else{
      if(pilih==3){
        printf("\nvegetables");
        printf("\nside dishes");
        printf("\nstaple food");
        printf("\ngood");
      }else{
        if(pilih==4){
          printf("\nfruits");
          printf("\nvegetables");
          printf("\nside dishes");
          printf("\nstaple food");
          printf("\nvery good");
        }else{
          if(pilih==5){
            printf("\nmilk");
            printf("\nfruits");
            printf("\nvegetables");
            printf("\nside dishes");
            printf("\nstaple food");
            printf("\nperfect");
          }
        }
      }
    }
  } 
  
  
  return 0;
 
}
