/**
 * Kullanıcı tarafından adı verilen dosyayı açarak içindeki
 * kelime sayısını hesaplayan programı yazmanız istenmektedir.
 * main fonksiyonunu değiştirmeyiniz. kelime_sayisi fonksiyonunu
 * yazmanız yeterlidir.
 * Dosya içinde beyaz boşluk karakterleri ve noktalama işaretleri
 * bulunabilir. Kelimeleri değerlendirirken ard arda gelen
 * alfabetik karakterleri bir kelime olarak kabul edilecektir.
 * Verilen dosyalardaki karakterlerin kodlaması ASCII olarak
 * seçilmiştir, Unicode kodlama kullanılmamaktadır.
 * Örneğin aşağıdaki metindeki kelime sayısı 5'dir.
 * Metin: "Bu metindeki kelime-sayisi 5'dir."
 * Kelimeler:
 * Bu
 * metindeki
 * kelime
 * sayisi
 * dir
 */
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

int kelime_sayisi(char *dosya_adi) {
    FILE *fptr; // Dosya tutamacı
    char c; // Okunacak karakter
    bool kelime_icinde = false; // kelimenin içinde olduğumuzu gösteren değişken/bayrak
    int adet = 0; // kelime adeti
    fptr = fopen(dosya_adi, "r"); // Dosyayı aç
    if(fptr == NULL) { // Dosya açma başarısız ise
        return -1;
    }
    while(!feof(fptr)) { // Dosya sonuna gelene kadar
        c = fgetc(fptr); // bir karakter oku
        if(isalpha(c)) { // okunan karakter harf mi
            kelime_icinde = true; // kelimenin içindeyiz
        }
        else { // Aksi halde
            if(kelime_icinde) { // kelimenin içinden dışına çıkmışsak
                adet++; // kelime adetini artır
            }
            kelime_icinde = false; // kelimenin dışındayız
        }
    }
    fclose(fptr); // Dosyayı kapat
    return adet; // kelime adetini döndür
}

int main() {
    char dosya_adi[100];
    scanf("%s", dosya_adi);
    printf("%d\n", kelime_sayisi(dosya_adi));
    return 0;
}
