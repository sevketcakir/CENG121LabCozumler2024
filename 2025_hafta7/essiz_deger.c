/**
 * Bu program, kullanıcıdan 20 adet tamsayı alacak ve 
 * bu sayıların eşsiz olup olmadığını kontrol edecektir.  
 * Program, girilen sayıların tamamının birbirinden farklı 
 * (eşsiz) olup olmadığını kontrol eder. Eğer bütün sayılar eşsizse,
 * ekrana "Eşsiz" yazdırılacak; eğer herhangi bir sayı birden fazla kez 
 * girilmişse, ekrana "Tekrarlı" yazdırılacaktır. 
 * 
 * Programın örnek çalışması aşağıda verilmiştir.
 * Girdi: 85 111 191 112 152 169 54 16 76 194 44 181 91 95 174 123 157 127 179 156
 * Çıktı: Eşsiz
 * 
 * Girdi: 119 26 100 178 193 26 141 104 52 89 93 80 142 74 182 84 34 26 90 100
 * Çıktı: Tekrarlı
 */
#include<stdio.h>

int main() {
    int sayilar[20];
    int essiz = 1; // eşsiz varsayalım
    for(int i=0; i<20; i++) { // sayıları diziye al
        scanf("%d", &sayilar[i]);
    }
    for(int i=0; i<20 && essiz; i++) { // essiz değeri yanlış(0) olduğunda döngüden çıkar
        for(int j=i+1; j<20; j++) { // i+1 konumundan başlayarak diğer konumlara bak
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
}
