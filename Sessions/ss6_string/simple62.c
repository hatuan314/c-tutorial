/*
 * Su dung ham gets() de nhap
 * Su dung ham puts() de xuat
 */

/*
 * Cac phuong thuc xu ly chuoi quan trong trong C
 * - strlen(string_name) => Tra ve chieu dai cua chuoi string_name
 * - strcpy(destination, source) => sao chep noi dung cua chuoi source toi chuoi destination
 * - strcat(first_string, second_string) => Noi chuoi first_string voi chuoi second_string.
 * Ket qua duoc luu vao chuoi dau tien
 * - strcmp(first_string, second_string) => So sanh chuoi first_string voi second_string.
 * Neu ca 2 chuoi giong nhau thi tra ve 0
 * - strrev(string) => tra ve chuoi string duoc dao nguoc
 * - strlwr(string) => tra ve chuoi ky tu chu thuong
 * - strupr(string) => Tra ve chuoi ky tu chu hoa
 * - strstr(string, match) => tra ve chuoi ky tu con
 */

#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char name[] = "Tuan Hoang";
//    puts("Nhap vao ten cua ban: " );
//    gets(name);
//    puts("Chao ban ");
//    puts(name);
    printf("Chao ban %s\n", name);
    // strlen()
    printf("In ra chieu dai chuoi - strlen: %lu\n", strlen(name));

    // strcpy()
    char strCopy[MAX];
    strcpy(strCopy, name);
    printf("Copy chuoi - strCpy: %s\n", strCopy);

    // strcmp()
    char fullName[] = "Tuan Hoang Anh";
    printf("So sang 2 chuoi - strcmp: %d\n", strcmp(name, fullName));
    printf("So sang 2 chuoi - strcmp: %d\n", strcmp(name, "Tuan Hoang"));
    printf("So sang 2 chuoi - strcmp: %d\n", strcmp(name, "TUAN HOANG"));

    // strcat()
//    char firstName[] = "Tuan";
//    char lastName[] = " Hoang";
//    strcat(firstName, lastName);
//    printf("Noi 2 chuoi - strcat: %s\n", firstName);

//    // strrev()
//    printf("Chuoi dao nguoc - strrev: %s", strrev(name));
//
//    // strlwr
//    printf("Chuoi chu thuong - strlwr: %s", strlwr(name));
    return 0;
}