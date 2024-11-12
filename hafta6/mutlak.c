/**
 * Bu uygulamada değiştirmeniz gereken iki kısım
 * bulunmaktadır. Birincisi main fonksiyonu içinde
 * mutlak fonksiyonuna çağrı gerçekleştirerek sonucu
 * ekrana yazdıracak kodu yazmanız, ikincisi ise
 * mutlak fonksiyonunun gövdesini yazmanızdır.
 * Ekrana yazdırma için "%f" kullanabilirsiniz.
 */
#include<stdio.h>
double mutlak(double deger);

int main()
{
    double sayi; // Sayıyı tanımla
    scanf("%lf", &sayi); // sayıyı al
    printf("%f\n", mutlak(sayi)); // fonksiyon çağrısını yap ve sonucu yazdır
    return 0;
}

// mutlak fonksiyonunun gövdesini yazınız
double mutlak(double deger) {
    if (deger < 0) { // değer negatifse
        deger = -deger; // -deger pozitif olur
    }
    return deger;
}
