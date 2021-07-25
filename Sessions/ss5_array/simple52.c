#include <stdio.h>
int arrMoneyType[5] = {50, 25, 10, 5, 1};

int addArrMoneyType(int totalMoney, int arrMoneyTypeCount[]) {
    int index = 0;
    while (index < 5) {
        arrMoneyTypeCount[index] = totalMoney / arrMoneyType[index];
        totalMoney -= arrMoneyTypeCount[index] * arrMoneyType[index];
        if (totalMoney == 0) {
            break;
        }
        index++;
    }
    return 0;
}

int outputMoneyTypeCount(int arrMoneyTypeCount[]) {
    int index = 0;
    while (index < 5) {
        switch (index) {
            case 0:
                printf("50k: %d\n", arrMoneyTypeCount[0]);
                break;
            case 1:
                printf("25k: %d\n", arrMoneyTypeCount[1]);
                break;
            case 2:
                printf("10k: %d\n", arrMoneyTypeCount[2]);
                break;
            case 3:
                printf("5k: %d\n", arrMoneyTypeCount[3]);
                break;
            case 4:
                printf("1k: %d\n", arrMoneyTypeCount[4]);
                break;
        }
        index++;
    }
    return 0;
}

int sumMoneyTypeCount(int arrMoneyTypeCount[]) {
    int sum = 0;
    int index = 0;
    while (index < 5) {
        sum += arrMoneyTypeCount[index];
        index++;
    }
    return sum;
}

int main() {
    int totalMoney;
    int arrMoneyTypeCount[5] = {0, 0, 0, 0, 0};
    printf("Nhap vao so tien: ");
    scanf("%d", &totalMoney);
    addArrMoneyType(totalMoney, arrMoneyTypeCount);
    outputMoneyTypeCount(arrMoneyTypeCount);
    int sum = sumMoneyTypeCount(arrMoneyTypeCount);
    printf("Tong so to cac menh gia la: %d\n", sum);
    return 0;
}
//int main() {
//    int T;
//    int to1;
//    int to5;
//    int to10;
//    int to25;
//    int to50;
//    printf("Nhap so tien T=");
//    scanf("%d", &T);
//    to50 = T / 50;
//    T -= 50 * to50;
//    to25 = T / 25;
//    T -= 25 * to25;
//    to10 = T / 10;
//    T -= 10 * to10;
//    to5 = T / 5;
//    T -= 5 * to5;
//    to1 = T;
//    printf("So to cac loai menh gia la :\n");
//    printf("Loai tien menh gia 50 : %d to\n", to50);
//    printf("Loai tien menh gia 25 : %d to\n", to25);
//    printf("Loai tien menh gia 10 : %d to\n", to10);
//    printf("Loai tien menh gia 5 : %d to\n", to5);
//    printf("Loai tien menh gia 1 : %d to\n", to1);
//    printf("Tong so to cac menh gia la : %d\n", to1 + to5 + to10 + to25 + to50);
//    return 0;
//}
