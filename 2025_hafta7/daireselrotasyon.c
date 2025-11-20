/**
 * Dairesel Rotasyon Programı
 *
 * Bu program, kullanıcıdan bir dizi alır ve bu diziyi dairesel
 * rotasyon ile döndürür.Kullanıcı ilk olarak dizinin eleman
 * sayısını (n) girecektir. Ardından dizinin her bir elemanını
 * sırayla girerek dizi oluşturacaktır. Program, girdiği diziyi
 * alacak ve sonra dairesel rotasyon yaparak diziyi döndürecek.
 * Son olarak döndürülen diziyi ekrana yazdıracaktır.
 *
 * Kullanıcının yapması gerekenler:
 * 1. İlk olarak dizinin eleman sayısını (n) girmelisiniz.
 * 2. Ardından, dizinin her bir elemanını sırasıyla girmelisiniz.
 *
 * Örnek Çalışmalar:
 *
 * Örnek 1:
 * Kullanıcıdan alınan giriş:
 * 5
 * 1 2 3 4 5
 * Çıktı:
 * 5
 * 1
 * 2
 * 3
 * 4
 *
 * Açıklama: Bu durumda dairesel rotasyon yapılır ve dizinin elemanları bir sağa kaydırılır.
 *
 * Örnek 2:
 * Kullanıcıdan alınan giriş:
 * 3
 * 10 20 30
 * Çıktı:
 * 30
 * 10
 * 20
 *
 * Açıklama: Bu durumda dairesel rotasyon yapılır ve dizinin elemanları bir sağa kaydırılır.
 */

#include<stdio.h>

void dizi_al(int dizi[], int sayi);
void dizi_yazdir(const int dizi[], int sayi);
void dairesel_rotasyon(int dizi[], int sayi);

// main fonksiyonunu değiştirmeyiniz
int main()
{
    int sayi; // Dizinin eleman sayısı
    scanf("%d", &sayi); // Sayıyı kullanıcıdan al
    int dizi[sayi]; // Diziyi olustur
    dizi_al(dizi, sayi); // Diziyi kullanıcıdan al
    dairesel_rotasyon(dizi, sayi); // Diziyi dairesel rotasyonla
    dizi_yazdir(dizi, sayi); // Diziyi ekrana yaz
    return 0;
}

void dairesel_rotasyon(int dizi[], int sayi) {
    int gecici = dizi[sayi-1]; // son elemanı gecici değişkenine at
    for(int i=sayi-2;i>=0;i--) { // sondan başa doğru döngü
        dizi[i+1]=dizi[i]; // dizi elemanlarını kaydır
    }
    dizi[0] = gecici; // gecici değişkeni ilk eleman olarak at
}

void dizi_al(int dizi[], int sayi) {
    for(int i=0; i<sayi; i++) {
        scanf("%d", &dizi[i]);
    }
}

void dizi_yazdir(const int dizi[], int sayi) {
    for(int i = 0; i < sayi; i++) {
        printf("%d\n", dizi[i]);
    }
}
