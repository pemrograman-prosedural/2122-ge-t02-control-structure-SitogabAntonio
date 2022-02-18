// 12S21015 - Sitogab Antonio Octavianus Girsang
// 12S21049 - Jesika Audina Purba

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int buku;
  float harga, potonganharga, totalharga, dibayar;
    scanf("%d", &buku);
    scanf("%f", &harga);

    totalharga = buku * harga;

    if (totalharga > 500000)
    {
        potonganharga = totalharga * 15 / 100;
        dibayar = totalharga - potonganharga;

        printf("%.2f\n", potonganharga);
        printf("%.2f\n", dibayar);
    }
    else if (totalharga >= 100000)
    {
        potonganharga = totalharga * 10 / 100;
        dibayar = totalharga - potonganharga;
        printf("%.2f\n", potonganharga);
        printf("%.2f\n", dibayar);
    }
    else if (totalharga > 50000)
    {
        potonganharga = totalharga * 5 / 100;
        dibayar = totalharga - potonganharga;

        printf("%.2f\n", potonganharga);
        printf("%.2f\n", dibayar);
    }
    else if (totalharga < 50000)
    {
        potonganharga = 0;
        dibayar = totalharga - potonganharga;
        printf("%s\n", "---");
        printf("%.2f\n", dibayar);
    }

 
  return 0;
 
}
