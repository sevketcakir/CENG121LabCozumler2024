#include<stdio.h>

int main() {
    double x, carpim=1.0/* çarpımı tutan değer */;
    int y;
    scanf("%lf %d", &x, &y); // x ve y'yi al
    for(int i=1; i <= y; ++i) { // y defa dön
        carpim *= x; // her seferinde carpim'i x ile çarp
    }
    printf("%.2f", carpim); // çarpımı(x^y) yazdır
    return 0;
}
