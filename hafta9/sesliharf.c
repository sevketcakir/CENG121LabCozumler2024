/**
 * Kullanıcıdan alınacak kelimenin içinde kaç tane sesli harf
 * olduğunu işaretçiler yardımıyla bulup ekrana yazdıran C programını
 * yazınız.
 */ 
#include<stdio.h>

int main() {
    char kelime[80];
    scanf("%s", kelime);
    char *ptr = kelime; // dizinin başlangıç adresini al
    int adet = 0;
    while(*ptr != '\0') {
        switch(*ptr) {
            case 'a': // sesli harf gelmişse
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                adet++;
                break;
            default:
            break;
        }
        ptr++; // sonraki adrese git
    }
    printf("%d\n", adet);
    return 0;
}

