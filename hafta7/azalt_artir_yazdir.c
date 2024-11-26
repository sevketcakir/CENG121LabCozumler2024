/**
 * Bu uygulamada iki adet özyinelemeli(recursive) fonksiyon
 * yazmanız beklenmektedir.
 * azaltarak_yaz fonksiyonu verilen değeri azaltarak, 1 olana
 * kadar ekrana yazdırmalıdır.
 * artirarak_yaz fonksiyonu verilen değeri arttırarak, 1'den
 * degere ulaşana kadar ekrana yazdırmalıdır.
 * Programın örnek çalışması aşağıda verilmiştir:
 * Girdi: 10
 * Çıktı:
 * 10 9 8 7 6 5 4 3 2 1
 * 1 2 3 4 5 6 7 8 9 10
 * Girdi: 5
 * Çıktı:
 * 5 4 3 2 1
 * 1 2 3 4 5
 *
 * Bu uygulamada iki fonksiyonda birbirine benzemektedir. Yazdırma
 * işleminin rekursif çağrıdan önce veya sonra yapılması ekrana
 * yazılma sırasını belirlemektedir. Her iki fonksiyonda da değerler
 * n'den 1'e doğru azalarak gitmektedir.
 */
#include<stdio.h>
void azaltarak_yaz(int deger); // prototip
void artirarak_yaz(int deger); // prototip

int main() {
    // Bu uygulama için main fonksiyonunu değiştirmeniz
    // beklenmemektedir.
    int deger = 0;
    scanf("%d", &deger);
    azaltarak_yaz(deger);
    puts("");
    artirarak_yaz(deger);
    puts("");
    return 0;
}

void azaltarak_yaz(int deger) {
    if(deger != 0) { // base case değilse
        printf("%d ", deger); // degeri ekrana yazdır
        azaltarak_yaz(deger-1); // rekursif çağrıyı deger-1 ile yap
    }
}

void artirarak_yaz(int deger) {
    if(deger != 0) { // base case değilse
        artirarak_yaz(deger-1); // rekursif çağrıyı deger-1 ile yap
        printf("%d ", deger); // değeri ekrana yazdır
    }
}
