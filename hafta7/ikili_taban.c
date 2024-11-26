/**
 * fonksiyon çağrılarının ve ekrana yazdırma işlemlerinin
 * sırası asagidaki gibidir(ikili_taban(6) için):
 *
 * ikili_taban(6); printf("0");
 *      v
 * ikili_taban(3); printf("1");
 *      v
 * ikili_taban(1); printf("1");
 *      v
 * ikili_taban(0);
 */
#include<stdio.h>

void ikili_taban(int sayi); // prototip

int main() {
    int sayi;
    scanf("%d", &sayi); // sayıyı al
    ikili_taban(sayi); // fonksiyonu çagır
    return 0;
}

void ikili_taban(int sayi) {
    if(sayi > 0) { // base case değilse
        ikili_taban(sayi/2); // rekursif çağrıyı sayi/2 ile yap
        printf("%d", sayi%2); // son basamağı yaz
    }
    else return; // base case, bu satır yazılmasa da çalışır
}






