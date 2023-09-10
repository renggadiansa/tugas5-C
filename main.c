#include <stdio.h>

int main() {
    //1
    int input;

    printf("Masukkan suhu: ");
    scanf("%d", &input);

    if (input < 0 ) {
        printf("benda tersebut adalah benda padat");
    } else if ( input < 100) {
        printf("benda tersebut adalah benda cair");
    } else {
        printf("benda tersebut adalah benda gas");
    }


    //2
    int tesAkademik;
    int tesKeterampilan;
    int tesPisikologi;

    int hasil;

    printf("masukkan nilai tes Akademik: ");
    scanf("%d", &tesAkademik);

    printf("masukkan nilai tes Keterampilan: ");
    scanf("%d", &tesKeterampilan);

    printf("masukkan nilai tes pisikologi: ");
    scanf("%d", &tesPisikologi);

    hasil = (tesAkademik + tesKeterampilan + tesPisikologi) / 3;
    printf("rata-rata %d\n", hasil);

    if (hasil > 75) {
        printf("selamat anda lulus dan  ");

        if (tesAkademik > tesKeterampilan && tesAkademik > tesPisikologi) {
            printf("anda masuk adiministrasi");
        } else if (tesKeterampilan > tesAkademik && tesKeterampilan > tesPisikologi) {
            printf("anda masuk produksi");
        } else {
            printf("anda masuk pemasaran");
        }

    } else {
        printf("anda tidak lulus\n");
    }


    //3
    int bil1;
    int bil2;

    int pilihan;
    int result;

    printf("Masukkan bilangan 1: ");
    scanf("%d", &bil1);

    printf("Masukkan bilangan 2: ");
    scanf("%d", &bil2);

    printf("Menu matematika\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Pembagian\n");
    printf("4. Perkalian\n");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        result = bil1 + bil2;
        printf("Hasil dari penjumlahan %d dan %d adalah %d\n", bil1, bil2, result);
    } else if (pilihan == 2) {
        result = bil1 - bil2;
        printf("Hasil dari pengurangan %d dan %d adalah %d\n", bil1, bil2, result);
    } else if (pilihan == 3) {
        if (bil2 == 0) { //handle error inputan 0
            printf("Tidak bisa membagi dengan bilangan nol\n");
        } else {
            result = bil1 / bil2;
            printf("Hasil dari pembagian %d dan %d adalah %d\n", bil1, bil2, result);
        }
    } else if (pilihan == 4) {
        result = bil1 * bil2;
        printf("Hasil dari perkalian %d dan %d adalah %d\n", bil1, bil2, result);
    } else {
        printf("Inputan tidak valid\n");
    }


    //4
    int angka;
    char huruf;

    printf("Masukkan angka :");
    scanf("%d", &angka);

    if(angka <= 40) {
        huruf = 'E';
    }else if(angka <= 55) {
        huruf = 'D';
    } else if (angka <= 60) {
        huruf = 'C';
    } else if (angka <= 80) {
        huruf = 'B';
    } else if (angka <= 100) {
        huruf = 'A';
    } else {
        printf("Nilai huruf tidak valid\n");
        return  1; //handle error
    }

    printf("Nilai huruf adalah %c\n", huruf);


    //5
    int hari;

    printf("Masukkan angka: ");
    scanf("%d", &hari);

    if(hari == 1) {
        printf("Hari ini adalah minggu");
    } else if ( hari == 2) {
        printf("Hari ini adalah senin");
    }else if (hari == 3) {
        printf("Hari ini adlaah selasa");
    } else if ( hari == 4) {
        printf("Hari ini adalah rabu");
    } else if ( hari == 5) {
        printf("Hari ini adalah kamis");
    } else if ( hari == 6 ) {
        printf("Hari ini adalah jumat");
    } else if ( hari == 7 ) {
        printf("Hari ini adalah sabtu");
    } else {
        printf("Tidak ada hari yang sesuai");
    }
    return 0;
}
