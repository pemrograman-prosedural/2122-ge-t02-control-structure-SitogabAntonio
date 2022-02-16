// NIM - Name
// NIM - Name

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int buku, harga, potonganharga, totalharga, dibayar;

  scanf("%d", buku);
  scanf("%d", harga);
 
  totalharga = buku * harga;

  if(totalharga > 500000) {
    potonganharga = totalharga * 15 / 100;
    dibayar = totalharga - potonganharga;

    printf("%d\n", potonganharga);
    printf("%d\n", dibayar);
  } else  {
    if (totalharga >= 100000)  {
      potonganharga = totalharga * 10 / 100;

      printf("%d\n", potonganharga);
      printf("%d\n", dibayar);
    } else  {
      if (totalharga > 50000) {
        potonganharga = totalharga * 5 / 100;
        dibayar = totalharga - potonganharga;

        printf("%d\n", potonganharga);
        printf("%d\n", dibayar);
    } else  {
      if(totalharga < 50000)  {
        potonganharga = 0;
        dibayar = totalharga - potonganharga;
        printf("%s\n", "---");
        printf("%d\n", dibayar);
       }
     }
   }
  }
  return 0;
 
}
