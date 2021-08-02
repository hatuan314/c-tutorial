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

// Them node o cuoi
node addLast(node header, int value) {
    node temp = createNode(value);  // Khoi tao node temp voi data = value
    node pointer;
    if (header == NULL) {
        header = temp;              // Neu linked list dang trong thi Node temp la head luon
    } else {
        pointer = header;
        while (pointer->next != NULL) {
            pointer = pointer->next;
        }
//        temp->next = header;        // Tro next cua temp = head hien tai
//        header = temp;              // Doi head hien tai = temp
        pointer->next = temp;
    }
    return  header;
}

// Them node o mot vi tri bat ky
node addAt(node header, int value, int position) {
    int index = 0;
    node temp = createNode(value);  // Khoi tao node temp voi data = value
    node pointer;
    if (header == NULL) {
        header = temp;              // Neu linked list dang trong thi Node temp la head luon
    } else {
        pointer = header;
        while (pointer->next != NULL && index != position) {
            pointer = pointer->next;
            index++;
        }
        if (index != position) {
            header = addLast(header, value); // hoac pointer->next = temp
        }
        temp->next = pointer->next;
        pointer->next = temp;
        pointer->next = temp;
    }
    return  header;
}

int main() {
    node header;
    // Input
    header = addLast(header, 4);
    header = addLast(header, 5);
    header = addLast(header, 6);
    header = addAt(header, 0, 1);

    // Output
    header = getNode(header);
    header = getNode(header);
    header = getNode(header);
    header = getNode(header);
    return 0;
}