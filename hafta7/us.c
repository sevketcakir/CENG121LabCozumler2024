/**
 * Bu uygulamada üs alma fonksiyonunu özyinelemeli olarak
 * yazmanız beklenmektedir.
 * Kullanıcının gireceği sayılar [0,14] aralığındadır ve bu sayıların
 * aralıkta olduğunu kontrol etmenize gerek yoktur.
 *
 * Programın örnek çalışması aşağıda verilmiştir:
 * Girdi: 2 3
 * Çıktı: 8
 * Girdi: 4 5
 * Çıktı: 1024
 *
 * Üs alma işlemini aşağıdaki gibi de yazabilirsiniz:
 * a^b = a*a^(b-1)
 * a^0 = 1 // base case
 * Bu iki ifade üs alma işleminin özyinelemeli ilişkisini
 * göstermektedir.
 */
#include<stdio.h>

unsigned long long int us(unsigned long long int a, unsigned long long int b); // prototip

int main() {
    // Bu uygulama için main fonksiyonunu değiştirmeniz
    // beklenmemektedir.
    unsigned long long int a, b;
    scanf("%llu %llu", &a, &b);
    printf("%llu\n", us(a, b));
    return 0;
}

unsigned long long int us(unsigned long long int a, unsigned long long int b) {
    if (b == 0) { // base case
        return 1; // a^0 = 1
    }
    else {
        return a * us(a, b-1); // a*a^(b-1)
    }
}
