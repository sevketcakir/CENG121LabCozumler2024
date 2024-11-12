/**
 * Kullanıcıdan [-100,100] aralığında alınan 10 tane tamsayının en
 * büyüğünü ekrana yazdıran C programını yazınız.
 */
#include<stdio.h>

int main() {
    int maks=-101;// gelebilecek en düşük sayıdan daha küçük değer
    int sayac=0, sayi;
    while(sayac < 10) { // alınan sayı adeti 10'dan küçük olduğu sürece
        scanf("%d", &sayi); // sayı al
        if (sayi > maks) { // alınan sayı maksimum değerden büyükse
            maks = sayi; // yeni maksimumu belirle
        }
        sayac++; // alınan sayı sayacını artır
    }
    printf("%d\n", maks); // maksimum değeri yazdır
    return 0;
}
