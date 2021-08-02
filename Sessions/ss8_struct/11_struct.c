/*
 * Cau 11 (De)
 */

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float score;
};

void showInfo(struct Student st) {
    printf(">>>>>>>>>>>>>>>>>>\n");
    printf("THONG TIN SINH VIEN\n");
    printf("Full name: %s\n", st.name);
    printf("Age: %d\n", st.age);
    printf("Score: %.2f\n", st.score);
}

void showAllInfo(struct Student *studentList, int max) {
    for (int index = 0; index < max; ++index) {
        showInfo(*studentList);
        *(studentList++);
    }
}

struct Student setInfo() {
    struct Student st;
    printf("Full name: ");
    gets(st.name);
    printf("Age: ");
    scanf("%d", &st.age);
    printf("Score: ");
    scanf("%f", &st.score);
    fflush(stdin);
    return st;
}

void setStudentList(struct Student *studentList, int max) {
    for (int index = 0; index < max; ++index) {
        printf(">>>>>>>>>>>>>>>>>>\n");
        *studentList = setInfo();
        *(studentList++);
    }
}

int main() {
    struct Student *studentList;
    int max;
    do {
        printf("So luong sinh vien can nhap? ");
        scanf("%d", &max);
    } while (max > 50);
    studentList = (struct Student *) malloc(max * sizeof (struct Student));
    fflush(stdin);
    setStudentList(studentList, max);
    showAllInfo(studentList, max);
    free(0);
    return 0;
}