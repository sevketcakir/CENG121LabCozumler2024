/**
 * Bu program, kullanıcıdan 20 adet tamsayı alacak ve bu sayılar
 * içinde kaç farklı değer olduğunu hesaplayıp ekrana yazdıracaktır.
 * Girilen sayıların [10,39] aralığında olduğu bilinmektedir.
 * 
 * Programın örnek çalışması aşağıda verilmiştir.
 * Girdi: 21 26 38 24 20 16 11 34 32 25 31 15 26 25 32 34 24 38 15 27
 * Çıktı: 13
 * 
 * Girdi: 21 23 32 37 30 25 24 14 15 29 31 15 17 16 26 16 19 32 18 35
 * Çıktı: 17
 * 
 * İpucu: 7. hafta sunumunun 15. sayfasındaki örnekteki gibi frekanslar
 * hesaplanabilir ve frekans değeri sıfırdan farklı kaç değer var sayılabilir.
 */
#include<stdio.h>

int main() {
    int sayilar[20]; // sayıları saklayacak dizi
    // [10,39] aralığındaki indeks değeri için 40 elemanlı dizi yeterlidir
    int frekans[40] = {0};
    int adet = 0;
    for (size_t i = 0; i < 20; i++) { // sayıları al
        scanf("%d", &sayilar[i]);
        frekans[sayilar[i]]++; // alınan sayının frekansını bir artır.
    }
    // Tüm frekanslara bakarak kaç tanesi sıfırdan büyük, say
    for (size_t i = 10; i < 40; i++) { // ilk 10 eleman boş
        if(frekans[i] > 0) {
            adet++;
        }
    }
    printf("%d\n", adet);
    return 0;
}