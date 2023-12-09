#include <stdio.h>
#include <string.h>

int pilih;
float bil1, bil2, hasil;
char confirm[20];

int main () {
    do
    {
        printf("Silahkan pilih operasi aritmatika yang anda inginkan : \n");
        printf("1. Penjumlahan '+'\n");
        printf("2. Pengurangan '-'\n");
        printf("3. Perkalian 'x'\n");
        printf("4. Pembagian ':'\n");

        printf("Silahkan pilih nomor menu : ");
        scanf("%d", &pilih);
        printf("Input bilangan 1 : ");
        scanf("%f", &bil1);
        printf("Input bilangan 1 : ");
        scanf("%f", &bil2);

        // operation
        if (pilih == 3 || pilih == 4) {
            if (pilih == 3) {
                hasil = bil1 * bil2;
            } else {
                hasil = bil1 / bil2;
            }
        } else if (pilih == 1 || pilih == 2) {
            if (pilih == 1) {
                hasil = bil1 + bil2;
            } else {
                hasil = bil1 - bil2;
            }
        } else {
            printf("no. menu tidak valid");
        }
        printf("Hasil = %.2f \n", hasil);
        // confirm condition
        printf("Ingin selesaikan operasi aritmatika ? Tulis [Yes / No]\n");
        scanf("%s", confirm);
        if (strcmp(confirm, "Yes") == 0) {
            break;
        }
    } while (pilih >= 1 && pilih <= 4);    
    return 0;
}