/**
 * Bu program kullanıcıdan alınan n adet kelimenin palindrom olduğunu
 * bulur. Palindrom kelimeler tersten okunuşu aynı olan kelimelerdir.
 * Örneğin "madam" ve "kayak" palindrom kelimelerdir.
 * Kullanıcı öncelikle n sayısını girecektir ve sonra n adet kelime
 * alınacaktır. Program, palindrom kelimelerin sayısını ekrana
 * yazdıracaktır.
 *
 * Bir metnin uzunlugunu bulmak için strlen() fonksiyonunu
 * kullanabilirsiniz. Örnek kullanım palindrom fonksiyonu içinde
 * bulunmaktadır.
 *
 * main içindeki kodları değiştirmenize gerek yoktur, sadece
 * palindrom fonksiyonunu yazmanız istenmektedir.
 */

#include <stdio.h>
#include <string.h> // strlen fonksiyonunu kullanmak için

int palindrom(char kelime[]);

int main() {
    char kelime[20]; // 20 karakterlik dizi
    int adet, palindromSayisi=0; // Adet ve palindrom sayısı
    scanf("%d", &adet); // Adet değişkenini kullanıcıdan al
    for (int i = 0; i < adet; i++) { // Adet kadar kelime al
        scanf("%s", kelime); // Kelimeyi kullanıcıdan al
        if (palindrom(kelime)) { // Kelime palindrom ise
            palindromSayisi++; // Palindrom sayısını artır
        }
    }
    printf("%d\n", palindromSayisi); // Palindrom sayısını ekrana yaz
    return 0;
}

int palindrom(char kelime[]) {
    int uzunluk = strlen(kelime); // Kelimenin uzunlugunu belirle
    for(int i=0; i<uzunluk/2; i++) { // Kelimenin ortasına kadar döngü
        if(kelime[i] != kelime[uzunluk-i-1]) { // Ortadan eşit uzaklıktaki karakterler farklı ise
            return 0; // palindrom degil, false döndür
        }
    }
    return 1; // Kod buraya gelmişse palindrom özelliğini bozan bir durum yoktur, true döndür
}





