/**
 * Kullanıcıdan alınacak 15 adet sayıdan kaç tanesinin negatif
 * olduğunu ekrana yazdıran C programını yazın.
 */

#include<stdio.h>

int main() {
    int sayac=0, sayi, adet=0;
    while(sayac < 15) { // alınan sayı 15'den küçük olduğu sürece
        scanf("%d", &sayi); // sayı al
        if(sayi < 0) { // sayı negatifse
            adet++; // adeti artır
        }
        sayac++; // sayaç her durumda artmalı
    }
    printf("%d\n", adet); // adeti yazdır
    return 0;
}
