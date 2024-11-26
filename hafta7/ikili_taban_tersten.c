/**
 * Kullanıcıdan alınan n tamsayısının(onlu tabanda) ikili tabandaki
 * karşılığını tersten ekrana yazdıran C programını yazınız. Programın
 * kolay olması için tersten yazdırılmak istenmektedir. Programın
 * örnek çalışması aşağıda verilmiştir:
 * Girdi: 6
 * Çıktı 011
 * Girdi: 55
 * Çıktı: 111011
 *
 * 6%2 -> 0, 6/2 -> 3
 * 3%2 -> 1, 3/2 -> 1
 * 1%2 -> 1, 1/2 -> 0
 *
 * 55%2 -> 1, 55/2 ->27
 * 27%2 -> 1, 27/2 ->13
 * 13%2 -> 1, 13/2 -> 6
 * 6%2 -> 0, 6/2 -> 3
 * 3%2 -> 1, 3/2 -> 1
 * 1%2 -> 1, 1/2 -> 0
 */
#include<stdio.h>

int main() {
    int sayi;
    scanf("%d", &sayi); // sayıyı al
    while(sayi > 0) { // sayı sıfırdan büyük olduğu sürece
        printf("%d", sayi%2); // son basamağı yazdır(ikiye bölümden kalan)
        sayi /= 2; // 2'ye bölerek basamak sayısını azalt
    }
    return 0;
}






