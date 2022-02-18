// NIM - Name
// NIM - Name

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int pilih;
  scanf("%d", &pilih);
  if(pilih==1){
    printf("%s\nstaple food");
    printf("%s\nyou need side dishes");
  }else{
    if(pilih==2){
      printf("%s\nside dishes");
      printf("%s\nstaple food");
      printf("%s\nyou need vegetables");
    }else{
      if(pilih==3){
        printf("%s\nvegetables");
        printf("%s\nside dishes");
        printf("%s\nstaple food");
        printf("%s\ngood");
      }else{
        if(pilih==4){
          printf("%s\nfruits");
          printf("%s\nvegetables");
          printf("%s\nside dishes");
          printf("%s\nstaple food");
          printf("%s\nvery good");
        }else{
          if(pilih==5){
            printf("%s\nmilk");
            printf("%s\nfruits");
            printf ("%s\nvegetables");
            printf("%s\nside dishes");
            printf("%s\nstaple food");
            printf("%s\nperfect");
          }
        }
      }
    }
  } 
  
  
  return 0;
 
}
