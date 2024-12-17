/**
 * Kullanıcının bir işyerindeki çalışanlar hakkında verdiği bilgilere
 * göre en yüksek maaşlı calışanı bulan programı yazınız. Kullanıcı
 * öncelikle çalışan sayısını ve sonrasında her çalışanın adını ve
 * maaşını verecektir. Buna göre en yüksek maaşlı çalışanın adını
 * Calisan yapısını kullanarak ekrana yazan programı yazınız.
 * Programın örnek çalışması aşagıdaki gibidir:
 * Girdi:
 * 4
 * Mehmet
 * 17000
 * Aliye
 * 75000
 * Mustafa
 * 40000
 * Ayse
 * 35000
 * Output:
 * Aliye
 */
#include<stdio.h>

typedef struct calisan {
    char ad[50];
    int maas;
} Calisan;

int main()
{
    int calisanSayisi;
    scanf("%d", &calisanSayisi); // çalışan sayısını al
    Calisan calisanlar[calisanSayisi]; // çalışanlar dizisini oluştur
    for(int i=0; i<calisanSayisi; i++) { // çalışan bilgilerini kullanıcıdan al
        scanf("%s", calisanlar[i].ad); // adı al
        scanf("%d", &calisanlar[i].maas); // maaşı al
    }
    int maksIndeks = 0; // ilk çalışanın en yüksek maaşı aldığını varsayıyoruz
    for(int i=1; i<calisanSayisi; i++) {
        if(calisanlar[i].maas > calisanlar[maksIndeks].maas) { // daha yüksek maaş alan çalışan varsa
            maksIndeks = i; // indeksi güncelle
        }
    }
    printf("%s\n", calisanlar[maksIndeks].ad); // en yüksek maaş alan çalışanın adını yazdır
    return 0;
}
