/**
 * Kullanıcıdan alınacak dosya adı ve n değerine göre
 * dosya içinde n uzunluklu kelime sayısını hesaplayan programı
 * yazmanız istenmektedir.
 * main fonksiyonunu değiştirmeyiniz. n_uzunluklu_kelime_sayisi
 * fonksiyonunu yazmanız yeterlidir.
 * bir serinin kelime olabilmesi için içinde sadece alfa
 * karakterlerin(a-z, A-Z) bulunması gerekmektedir. Bir önceki
 * uygulamadakine benzer hesaplanmalıdır.
 */
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

int n_uzunluklu_kelime_sayisi(char *dosya_adi, int n) {
    FILE *fptr; // Dosya tutamacı
    char c; // Okunacak karakter
    bool kelime_icinde = false; // kelimenin içinde olduğumuzu gösteren değişken/bayrak
    int adet = 0; // kelime adeti
    int kelime_uzunlugu = 0; // kelime uzunluğunu tutacak değişken
    fptr = fopen(dosya_adi, "r"); // Dosyayı aç
    if(fptr == NULL) { // Dosya açma başarısız ise
        return -1;
    }
    while(!feof(fptr)) { // Dosya sonuna gelene kadar
        c = fgetc(fptr); // bir karakter oku
        if(isalpha(c)) { // okunan karakter harf mi
            if(!kelime_icinde) { // bir önceki karakter harf değilse
                kelime_uzunlugu = 0; // kelime uzunluğunu sıfırla
            }
            kelime_icinde = true; // kelimenin içindeyiz
            kelime_uzunlugu++; // kelime uzunluğunu artır
        }
        else { // Aksi halde
            if(kelime_icinde && kelime_uzunlugu == n) { // kelimenin içinden dışına çıkmışsak ve kelime uzunluğu n ise
                adet++; // kelime adetini artır
            }
            kelime_icinde = false; // kelimenin dışındayız
        }
    }
    fclose(fptr); // Dosyayı kapat
    return adet; // kelime adetini döndür}
}
int main() {
    char dosya_adi[100];
    int n;
    scanf("%s%d", dosya_adi, &n);
    printf("%d\n", n_uzunluklu_kelime_sayisi(dosya_adi, n));
    return 0;
}
