/**
 * Kullanıcıdan beş adet tamsayı alacak ve bu sayıların
 * değerlerine göre yatay eksende çubuk grafik çizdirecek
 * programı yazınız. Her satırda, alınan değer kadar 'a'
 * karakteri basılması gerekmektedir. Programın örnek
 * çalışması aşağıda verilmiştir:
 *
 * Girdi: 5 3 2 0 7
 * Çıktı:
 * aaaaa
 * aaa
 * aa
 *
 * aaaaaaa
 */
#include<stdio.h>

int main() {
    int s1, s2, s3, s4, s5; // 5 farklı değişken tanımla
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5); // 5 değeri al
    for(int i=1; i<=5; i++) {
        int miktar; // i'nin değerine göre kaç tane a yazılacağını belirtir
        switch(i) {
            case 1: // i=1 ise
                miktar=s1; // s1 kadar a basılacak
                break;
            case 2:
                miktar=s2;
                break;
            case 3:
                miktar=s3;
                break;
            case 4:
                miktar=s4;
                break;
            case 5:
                miktar=s5;
                break;
        }
        // miktar kadar a bas
        for(int j=1; j<=miktar;j++) {
            printf("a");
        }
        puts(""); // satır sonu
    }
    return 0;
}
