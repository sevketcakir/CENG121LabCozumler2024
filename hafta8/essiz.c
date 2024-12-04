/**
 * Bu program, kullanıcıdan değişken sayıda tamsayı alacak ve
 * bu sayıların eşsiz olup olmadığını kontrol edecektir. Kullanıcı
 * önce kaç adet sayı gireceğini belirtecek, ardından bu sayıları
 * girecektir. Program, girilen sayıların tamamının birbirinden farklı
 * (eşsiz) olup olmadığını kontrol eder. Eğer bütün sayılar eşsizse,
 * ekrana "Eşsiz" yazdırılacak; eğer herhangi bir sayı birden fazla kez
 * girilmişse, ekrana "Tekrarlı" yazdırılacaktır.
 *
 * Programın örnek çalışması aşağıda verilmiştir.
 * Girdi: 7 12 5 7 1 4 6 25
 * Çıktı: Eşsiz
 *
 * Girdi: 9 6 5 8 12 21 5 13 25 20
 * Çıktı: Tekrarlı
 */
#include<stdio.h>

int tekrarli(const int dizi[], int boyut);

int main() {
    int boyut;
    scanf("%d", &boyut); // dizi boyutunu al
    int dizi[boyut]; // değişken uzunluklu dizi oluştur
    for(int i=0; i<boyut; i++) { // dizi elemanlarını al
        scanf("%d", &dizi[i]);
    }
    // main içinde yazdırma
    int essiz=1; // eşsiz olduğunu varsayıyoruz
    for(int i=0;i<boyut-1;i++) {
        for(int j=i+1;j<boyut;j++) {
            if (dizi[i] == dizi[j]) { // tekrarlı değer var
                essiz=0; // eşsiz=false
            }
        }
    }
    if(essiz) {
        printf("Eşsiz\n");
    }
    else {
        printf("Tekrarlı\n");
    }

    // Fonksiyon kullanarak yazdırma, diğer çözümün aktif olması için
    // açıklama haline getirildi

    // if(tekrarli(dizi, boyut)) {
    //     printf("Tekrarlı\n");
    // }
    // else {
    //     printf("Eşsiz\n");
    // }
    return 0;
}
int tekrarli(const int dizi[], int boyut) {
    for(int i=0;i<boyut-1;i++) {
        for(int j=i+1;j<boyut;j++) {
            if (dizi[i] == dizi[j]) {
                return 1; // tekrarlı değer var
            }
        }
    }
    return 0; // false
}
