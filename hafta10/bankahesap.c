/**
 * Bir banka simülasyonu yapılmak istenmektedir. Programa sırasıyla
 * müşteri sayısı, müşterilerin adları, hesap hareketi sayısı ve hesap
 * hareketleri verilecektir. Bir hesap hareketi de hesap adı ve bakiye
 * değişimini temsil eder. Hesap hareketlerinden sonra bir müşterinin
 * adı verilecektir ve programın ilgili müşterinin bakiyesini ekrana
 * yazdırması istenmektedir. Programın örnek kullanımı aşagıdaki gibidir:
 *
 * Örnek girdi 1:
 * 9
 * SULTAN
 * YUSUF
 * ABDULLAH
 * MERYEM
 * BURAK
 * FURKAN
 * HACER
 * RECEP
 * EMRE
 * 5
 * MERYEM 500
 * MERYEM -900
 * HACER -600
 * EMRE -1000
 * RECEP -400
 * HACER
 *
 * Çıktı:
 * -600
 *
 * Örnek girdi 2:
 * 8
 * AYSEL
 * OSMAN
 * KADIR
 * BUSRA
 * SULTAN
 * TUGBA
 * MUSTAFA
 * METIN
 * 7
 * KADIR -300
 * KADIR -200
 * METIN -1000
 * KADIR 700
 * MUSTAFA 400
 * METIN 500
 * TUGBA 600
 * AYSEL
 *
 * Çıktı:
 * 0
 */
#include<stdio.h>
#include<string.h>
typedef struct hesap {
    char ad[50];
    int bakiye;
} Hesap;

void hesap_guncelle(Hesap hesap[], int hesapSayisi, char *ad, int miktar) {
    for(int i=0; i<hesapSayisi;i++) { // tüm hesapları dolaş
        if(strcmp(ad, hesap[i].ad) == 0) { // hesap adını strcmp ile kıyasla
            hesap[i].bakiye += miktar; // hesap bakiyesini guncelle
            return; // fonksiyonu sonlandır
        }
    }
}
int main()
{
    int musteriSayisi; // Müşteri sayısını tutan değişken
    scanf("%d", &musteriSayisi); // müşteri sayısını al
    Hesap hesaplar[musteriSayisi]; // hesaplar dizisini oluştur
    for(int i=0; i<musteriSayisi; i++) { // hesap bilgilerini kullanıcıdan al
        scanf("%s", hesaplar[i].ad); // adı al
        hesaplar[i].bakiye = 0; // bakiyesini sıfırla
    }

    int hareketSayisi; // hesap hareket sayısını tutan değişken
    scanf("%d", &hareketSayisi); // hesap hareket sayısını al
    for(int i=0; i<hareketSayisi; i++) {
        char isim[50]; // hareketi yapacak müşterinin adını tutan değişken
        int hareketMiktari; // hareket miktarını tutan değişken
        scanf("%s%d", isim, &hareketMiktari); // isim ve hareket miktarını al
        hesap_guncelle(hesaplar, musteriSayisi, isim, hareketMiktari); // hesapları güncelle
    }

    char sorgulanacakIsim[50]; // sorgulanacak müşterinin adını tutan değişken
    scanf("%s", sorgulanacakIsim); // sorgulanacak Müşterinin adını al
    // Sorgulama işlemini bir fonksiyon ile de yapabiliriz
    for(int i=0;i<musteriSayisi;i++) { // sorgulanacak müşteriyi bulmak için döngü
        if(strcmp(sorgulanacakIsim, hesaplar[i].ad) == 0) { // sorgulanacak müşterinin adını strcmp ile kıyasla
            printf("%d\n", hesaplar[i].bakiye); // hesap bakiyesini yazdır
            break; // döngüyü sonlandır
        }
    }
    return 0;
}
