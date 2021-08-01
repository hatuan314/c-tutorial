/*
 * Struct: la mot kieu du lieu do nguoi dung tu dinh nghia.
 * Struct => Class
 */

/*
 * Con nguoi: ten, chieu cao, gioi tinh,v.v...
 */

#include "stdio.h"

struct Human {
    char name[20];
    float height;
    int sex;
};

void showInfo(struct Human *human) {
    printf(">>>>>>>>>>>>>>>>");
    printf("SO YEU LY LICH\n");
    printf("Ten: %s\n", (*human).name);
    printf("Chieu cao: %.2f\n", (*human).height);
    if ((*human).sex == 0)
        printf("Gioi tinh: Nu\n");
    else if ((*human).sex == 1)
        printf("Gioi tinh: Nam\n");
    else
        printf("Gioi tinh: khong xac dinh");
}

void setInfo(struct Human *human) {
    printf("Ten cua ban la gi? ");
    gets(human->name); // human->name <=> (*human).name
    printf("Chieu cao cua ban la bao nhieu? ");
    scanf("%f", &(*human).height);
    printf("Gioi tinh cua ban la gi? ");
    scanf("%d", &(*human).sex);
    fflush(stdin);
}

int main() {
    struct  Human tuan;
    struct  Human lan;
    struct  Human anh;

    setInfo(&tuan);
    setInfo(&lan);
    setInfo(&anh);

    showInfo(&tuan);
    showInfo(&lan);
    showInfo(&anh);
}