#include <stdio.h>
#include <stdlib.h>

int main()
{
  int dizi[100];
  int i,j,bulunan_deger=-1,aranacak_deger;

  for (i=0;i<100;i++) {
    dizi[i]=i*2;
  }
  printf("Aranacak degeri girin :");
  scanf("%d",&aranacak_deger);

  for (j=0;j<100;j++) {
    if (aranacak_deger==dizi[j]) {

    bulunan_deger=j;
    printf("Aranan deger %d , %d . indiste bulundu ...",aranacak_deger,bulunan_deger);
   }
  }
  if (bulunan_deger==-1) printf("Bulunamadi!!");
    return 0;
}
