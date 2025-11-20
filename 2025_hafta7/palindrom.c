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
#include <string.h>

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
    int uzunluk = strlen(kelime);
    for (size_t i = 0; i < uzunluk / 2; i++) { // dizinin ortasına kadar bak
        // soldan sağa ve sağdan sola iki değer sırayla bak
        if(kelime[i] != kelime[uzunluk - i - 1]) {
            return 0; // eşleşmeyen karakterler var, palindrom değil
        }
    }
    // Çalışma satırı buraya kadar geldiyse, return 0; ifadesi hiç
    // çalışmamıştır. O nedenle kelime palindromdur.
    return 1; // doğru döndür
}
