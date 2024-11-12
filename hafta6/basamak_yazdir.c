/**
 * Bu uygulamada kullanıcıdan alınan bir tamsayının basamak değerleri
 * ayrık olarak ters sırada ekrana yazdırılmak istenmektedir. Bunun
 * için basamak_yazdir fonksiyonunun gövdesini yazmanız ve main
 * fonksiyonu içinde basamak_yazdir fonksiyonunu uygun parametrelerle
 * çağırarak sonucu ekrana yazdırmanız beklenmektedir.
 * Fonksiyonun örnek çalışması aşağıda verilmiştir:
 * basamak_yazdir(123456) fonksiyonu ekrana "6 5 4 3 2 1 " yazdırmalıdır.
 * 123456 değeri için mod ve bölme işlemleri:
 *
 * 123456%10 -> 6
 * 123456/10 -> 12345
 * 12345%10 -> 5
 * 12345/10 -> 1234
 * 1234%10 -> 4
 * 1234/10 -> 123
 * 123%10 -> 3
 * 123/10 -> 12
 * 12%10 -> 2
 * 12/10 -> 1
 * 1%10 -> 1
 * 1/10 -> 0
 */

#include<stdio.h>

void basamak_yazdir(int sayi); // prototip

int main() {
    int sayi;
    scanf("%d", &sayi);
    basamak_yazdir(sayi); // fonksiyon çağrısı, yazdırma işlemi basamak_yazdir
                          // içinde yapıldığı için printf yazmıyoruz
    return 0;
}

// basamak_yazdir fonksiyonunun gövdesini yazınız
void basamak_yazdir(int sayi) {
    while (sayi > 0) { // sayı sıfırdan büyük olduğu sürece
        printf("%d ", sayi%10); // son basamağı yazdır
        sayi /= 10; // 10'a bölerek basamak sayısını azalt
    }
    printf("\n"); // satır sonu
}





