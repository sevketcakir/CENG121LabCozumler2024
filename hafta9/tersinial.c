/**
 * Kullanıcıdan alınacak kelimenin tersini işaretçiler yardımıyla
 * alarak ekrana yazdıran tersini_al fonksiyonunu yazmanız 
 * istenmektedir. main fonksiyonu içinde değişiklik yapmayınız.
 * "merhaba" -> "abahrem"
 * "all" -> "lla"
 */ 
#include<stdio.h>
#include<string.h>

void tersini_al(char *kelime);

int main() {
    char kelime[50];
    scanf("%s", kelime);
    tersini_al(kelime);
    printf("%s\n", kelime);
    return 0;
}

void tersini_al(char *kelime) {
    int uzunluk = strlen(kelime); //uzunluğu strlen yardımıyla belirle
    char *bas = kelime; // başlangıç değerinin konumunu al
    char *son = kelime + uzunluk - 1; // son elemanın konumunu al(NULL'dan bir önceki)
    while(bas < son) { // orta noktaya ulaşana kadar
        int gecici = *bas; // bas ve son konumundakileri değiştir
        *bas = *son;
        *son = gecici;
        bas++; // baştaki adresi artır
        son--; // sondaki adresi azalt
    }
}








