#include<stdio.h>
int main() {
    float anapara, oran, faiz;
    int gun;
    // anapara oran ve faizi al
    scanf("%f %f %d", &anapara, &oran, &gun);
    faiz = anapara * oran * gun / 365; // faizi hesapla
    printf("%.2f\n", faiz); // faizi yazdır
    return 0;
}
