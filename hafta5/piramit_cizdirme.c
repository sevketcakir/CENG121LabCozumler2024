#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n); // n sayısını al
    for(int i=1; i <= n; ++i) { // i, 1'den n'e döner
        for(int j=1; j <= n-i; j++) { // boşluk için döngü
            printf(" ");
        }
        for(int j=1; j <= i; ++j) { // a'ları bastırmak için döngü
            printf("aa");
        }

        printf("\n"); // alt satıra geç
    }
    return 0;
}
