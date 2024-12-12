/**
 * Kullanıcıdan alınacak iki adet kelimeyi işaretçiler yardımıyla
 * karşılaştırarak, kelimeler aynı ise ekrana "Aynı", aksi halde
 * "Farklı" yazacak C programını yazınız.
 */ 
#include<stdio.h>
#include<string.h>
// iki stringi karşılaştıran fonksiyon
int karsilastir(char *p1, char *p2) {
    if(strlen(p1) != strlen(p2)) { // uzunluklar eşit değilse
        return 0; // false
    }
    while(*p1 != '\0') { // NULL görene kadar ilerle(uzunluklar eşit olduğu için sadce *p1'e bakmak yeterli)
        if(*p1 != *p2) { // değerler farklı ise
            return 0; // false
        }
        p1++; p2++;
    }
    return 1; // true
}

int main() {
    char kelime1[50], kelime2[50];
    scanf("%s%s", kelime1, kelime2); // kelimeleri al
    if (karsilastir(kelime1, kelime2)) { // aynı ise
        printf("Aynı\n");
    }
    else {
        printf("Farklı\n");
    }
    return 0;
}