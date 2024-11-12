/**
 * Kullanıcıdan alınacak pozitif tamsayının kendisinden küçük
 * kaç tane tam böleni olduğunu yazdıran C programını yazınız.
 * Örneğin 8 sayısının tam bölen sayısı 3 olacaktır(1,2,4)
 */
#include<stdio.h>

int main() {
    int sayi, adet=0, sayac=1;
    scanf("%d", &sayi); // sayıyı al
    while(sayac <= sayi/2) { // sayac sayi/2'den küçük veya eşit olduğu sürece
        if (sayi % sayac == 0) { // tam bölünüyorsa
            adet++; // adeti artır
        }
        sayac++; // sayacı artır
    }
    printf("%d\n", adet); // adeti yazdır
    return 0;
}
