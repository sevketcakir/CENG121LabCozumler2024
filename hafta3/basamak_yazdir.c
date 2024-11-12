#include<stdio.h>
int main() {
    int bir, on, yuz, bin, onbin; // basamaklar
    int sayi;
    scanf("%d", &sayi); // sayıyı al
    bir = sayi % 10; // birler basamağı
    on = sayi / 10 % 10; // onlar basamağı
    yuz = sayi / 100 % 10; // yüzler
    bin = sayi / 1000 % 10; // binler
    onbin = sayi / 10000 % 10; // onbinler
    printf("%d\n", onbin);
    printf("%d\n", bin);
    printf("%d\n", yuz);
    printf("%d\n", on);
    printf("%d\n", bir);
 }
