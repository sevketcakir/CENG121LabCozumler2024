#include<stdio.h>

 int main() {
    int sayi1, sayi2;
    // prompt vermek bilmoodle sisteminde genellikle çıktınızı bozar
    // o nedenle gereksiz bir printf yazmaktan kaçınalım
    // printf("2 sayıyı girin: ");
    scanf("%d %d", &sayi1, &sayi2); // iki sayı al
    int toplam = sayi1 + sayi2; // sayıları topla
    printf("Toplam: %d\n", toplam); // toplamı yazdır
 }
