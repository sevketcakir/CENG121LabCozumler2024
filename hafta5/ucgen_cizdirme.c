#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n); // n sayısını al
    for(int i=1; i <= n; ++i) { // n defa dönen dış döngü
        // her satırda giderek artan sayıda a bastır
        for(int j=1; j <= i; ++j) { // 1'den i'ye kadar dön
            printf("a");
        }
        printf("\n"); // alt satıra geçmek için
    }
    return 0;
}
// n=3 için i ve j'nin aldığı değerler
// i j
// 1 1
// 2 1,2
// 3 1,2,3
