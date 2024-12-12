/**
 * Kullanıcıdan alınacak bir kelimenin uzunluğunu, işaretçiler
 * yardımıyla ve strlen fonksiyonunu kullanmadan hesaplayan
 * C programını yazınız. Verilecek kelimelerin uzunluğu 50'den
 * küçüktür.
 * "merhaba"
 */
 
#include<stdio.h>

int main() {
    char kelime[80];
    scanf("%s", kelime);
    int uzunluk = 0;
    char *ptr = kelime; // dizinin başlangıç adresini al
    
    // yol 1: while döngüsü ile
    // while(*ptr != '\0') {
    //     uzunluk++;
    //     ptr++;
    // }

    // yol 2: for döngüsü ile
    for(;*ptr != '\0'; ptr++, uzunluk++); // NULL görene kadar devam et ve uzunluğu artır
    printf("%d\n", uzunluk);
    return 0;
}