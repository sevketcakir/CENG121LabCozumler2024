/**
 * Kullanıcıdan alınacak tamsayının tek mi, çift mi olduğunu
 * bulan programı yazınız. Eğer sayı tek ise ekrana "tek",
 * aksi halde "çift" yazdırın.
 */
#include<stdio.h>

int main() {
    int sayi; // sayıyı tanımla(bildirim)
    scanf("%d", &sayi); // sayıyı al
    if (sayi%2 == 0) { // ikiye bölümden kalan sıfırsa
        printf("çift\n");
    } // if sonu
    else { // aksi halde
        printf("tek\n");
    } // else sonu
}
