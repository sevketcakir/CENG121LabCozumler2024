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

int main() {
    int adet;
    scanf("%d", &adet);
    int sayilar[adet]; // değişken uzunluklu dizi tanımı(VLA)
    int essiz = 1; // eşsiz varsayalım
    for(int i=0; i<adet; i++) { // sayıları diziye al
        scanf("%d", &sayilar[i]);
    }
    for(int i=0; i<adet && essiz; i++) { // essiz değeri yanlış(0) olduğunda döngüden çıkar
        for(int j=i+1; j<adet; j++) { // i+1 konumundan başlayarak diğer konumlara bak
            if (sayilar[i] == sayilar[j]) { // tüm ikili konumları karşılaştırır
                essiz = 0; // eşsiz değil
                break;
            }
        }
    }
    if(essiz)
        puts("Eşsiz");
    else
        puts("Tekrarlı");

    return 0;
}