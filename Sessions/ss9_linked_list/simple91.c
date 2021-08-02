/*
 * Danh sach lien ket (LinkedList)
 */

#include <stdio.h>
#include <stdlib.h>

struct LinkedList {
    int data;
    struct LinkedList *next;
};

// Kieu du lieu LinkedList co the thay bang node cho ngan gon
typedef struct LinkedList *node;

node getNode(node header) {
    printf("%d\t", header->data);
    return header->next;
}
node createNode(int value) {
    node temp;
    temp = (node) malloc(sizeof(struct LinkedList));
    temp->next = NULL;
    temp->data = value;
    return temp;
}

// Them node o dau
node createHeader(node header, int value) {
    node temp = createNode(value);  // Khoi tao node temp voi data = value
    if (header == NULL) {
        header = temp;              // Neu linked list dang trong thi Node temp la head luon
    } else {
        temp->next = header;        // Tro next cua temp = head hien tai
        header = temp;              // Doi head hien tai = temp
    }
    return  header;
}



int main() {
    node header;
    // Input
    header = createHeader(header, 4);
    header = createHeader(header, 5);
    header = createHeader(header, 6);

    // Output
    header = getNode(header);
    header = getNode(header);
    header = getNode(header);
    return 0;
}