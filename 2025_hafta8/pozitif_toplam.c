/**
 * Bu uygulamada kullanıcıdan 50 tam sayı alınacaktır ve dizide görülen ilk
 * negatif sayıdan önceki pozitif sayıların toplamı hesaplanacaktır. Hesaplamayı
 * pozitif_toplam fonksiyonu yapacaktır. Fonksiyonun prototipi ve main fonksiyonu
 * aşağıda verilmiştir. Pozitif_toplam fonksiyonunun gövdesini işaretçiler
 * kullanarak yazmanız beklenmektedir.
 * main fonksiyonunda değişiklik yapmayınız...
 *
 * Programın örnek çalışması aşağıda verilmiştir(6 sayı için):
 * Girdi: 10 20 30 -5 40 50
 * Çıktı: 60
 */
#include<stdio.h>

int pozitif_toplam(const int *sayilar, int adet);

int main(int argc, char const *argv[])
{
    int sayilar[50];
    for (int i = 0; i < 50; i++) {
        scanf("%d", &sayilar[i]);
    }
    int toplam = pozitif_toplam(sayilar, 50);
    printf("%d\n", toplam);
    return 0;
}

int pozitif_toplam(const int *sayilar, int adet) {
    int toplam = 0; // toplamı tutacak değişken
    int i=0; // sınır kontrolü için değişken
    // mevcut sayı pozitif ve i, 50'den küçük olduğu sürece
    while(*sayilar >= 0 && i<50) {
        toplam += *sayilar; // toplamın üzerine mevcut sayıyı ekle
        sayilar++; // bir sonraki elemana geç
        i++; // adeti bir artır
    }
    return toplam;
}








