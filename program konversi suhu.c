//An'im Falahuddin
//5022251161
//TE-34
#include <stdio.h>

int main() {
    int pilihan;
    float suhu, hasil1, hasil2;

    printf("Program Konversi Suhu\n");
    printf("----------------------\n");
    printf("Pilih jenis konversi:\n");
    printf("1. Celcius ke Fahrenheit dan Kelvin\n");
    printf("2. Fahrenheit ke Celcius dan Kelvin\n");
    printf("3. Kelvin ke Celcius dan Fahrenheit\n");
    printf("Masukkan pilihan (1/2/3): ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            printf("Masukkan suhu dalam Celcius: ");
            scanf("%f", &suhu);
            hasil1 = (suhu * 9/5) + 32;     // Fahrenheit
            hasil2 = suhu + 273.15;         // Kelvin
            printf("Fahrenheit: %.2f\n", hasil1);
            printf("Kelvin: %.2f\n", hasil2);
            break;
        case 2:
            printf("Masukkan suhu dalam Fahrenheit: ");
            scanf("%f", &suhu);
            hasil1 = (suhu - 32) * 5/9;     // Celcius
            hasil2 = hasil1 + 273.15;       // Kelvin
            printf("Celcius: %.2f\n", hasil1);
            printf("Kelvin: %.2f\n", hasil2);
            break;
        case 3:
            printf("Masukkan suhu dalam Kelvin: ");
            scanf("%f", &suhu);
            hasil1 = suhu - 273.15;         // Celcius
            hasil2 = (hasil1 * 9/5) + 32;   // Fahrenheit
            printf("Celcius: %.2f\n", hasil1);
            printf("Fahrenheit: %.2f\n", hasil2);
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }

    return 0;
}
