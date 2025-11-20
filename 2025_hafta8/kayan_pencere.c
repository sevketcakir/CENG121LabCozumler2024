/**
 * Kayan Pencere Uygulaması
 * Bu program, kullanıcıdan 10 adet tamsayı alır ve bu sayılardan
 * kayan pencere ortalamalarını hesaplar. Kayan pencere, ardışık
 * üç sayının ortalamasıdır. Örneğin, ilk üç sayı 4, 8, 6 ise
 * ilk kayan pencere ortalaması (4 + 8 + 6) / 3 = 6'dır.
 * Program, kayan pencere ortalamalarını yeni bir diziye kaydeder
 * ve bu diziyi ekrana yazdırır.
 * Fonksiyon prototipi ve main fonksiyonu aşağıda verilmiştir.
 * Kayan pencere hesaplama fonksiyonunun gövdesini işaretçiler
 * kullanarak yazmanız beklenmektedir.
 * main fonksiyonunda değişiklik yapmayınız...
 *
 * Programın örnek çalışması aşağıda verilmiştir:
 * Girdi: 10 15 20 25 30 35 40 45 50 55
 * Çıktı: 15 20 25 30 35 40 45 50
 *
 * Ortalamalar tam sayı olarak hesaplanır (ondalıklı kısım atılır),
 * yani üç sayıyı toplayıp 3'e böldüğünüzde sonucu tam sayı olarak alırsınız.
 */
#include<stdio.h>
#define DIZI_BOYUTU 10
#define KAYAN_DIZI_BOYUTU 8

void kayan_pencere(int *girdi, int *kayan_dizi);

int main(int argc, char const *argv[])
{
    int girdi[DIZI_BOYUTU]; // Girdi dizisini tanımla
    int kayan_dizi[KAYAN_DIZI_BOYUTU]; // Kayan pencere dizisini tanımla
    for (int i = 0; i < DIZI_BOYUTU; i++) {
        scanf("%d", &girdi[i]); // Girdi dizisini oku
    }
    kayan_pencere(girdi, kayan_dizi); // Kayan pencere fonksiyonunu çağır
    for (int i = 0; i < KAYAN_DIZI_BOYUTU; i++) {
        printf("%d\n", kayan_dizi[i]); // Kayan pencere dizisini yazdır
    }
    return 0;
}

void kayan_pencere(int *girdi, int *kayan_dizi) {
    /**
     * Aşağıdaki döngü kayan_dizi ve girdi işaretçilerini kullanarak
     * her adımda bir kayan pencere değerini hesaplar. girdi işaretçisinin
     * değerine göre sıradaki üç değerin ortalaması alınır ve kayan_dizi
     * isimli diziye yerleştirilir.
    */
    for (int i = 0; i < KAYAN_DIZI_BOYUTU; i++, kayan_dizi++, girdi++) {
        *kayan_dizi = (*girdi + *(girdi + 1) + *(girdi + 2)) / 3;
    }
}
