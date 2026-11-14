
#include <stdio.h>
#define SIZE 5

int deque[SIZE];
int front = -1, rear = -1;

int isFull() {
    return (front == 0 && rear == SIZE - 1) ||
           (front == rear + 1);
}

int isEmpty() {
    return front == -1;
}

// 1. Insertion at front
void insertFront(int value) {
    if (isFull()) {
        printf("Deque is full\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else if (front == 0) {
        front = SIZE - 1;
    } else {
        front--;
    }

    deque[front] = value;
}

// 2. Insertion at rear
void insertRear(int value) {
    if (isFull()) {
        printf("Deque is full\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else if (rear == SIZE - 1) {
        rear = 0;
    } else {
        rear++;
    }

    deque[rear] = value;
}

// 3. Deletion at front
void deleteFront() {
    if (isEmpty()) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted: %d\n", deque[front]);

    if (front == rear) {
        front = rear = -1;
    } else if (front == SIZE - 1) {
        front = 0;
    } else {
        front++;
    }
}

// 4. Deletion at rear
void deleteRear() {
    if (isEmpty()) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted: %d\n", deque[rear]);

    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = SIZE - 1;
    } else {
        rear--;
    }
}

int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);

    deleteFront();
    deleteRear();

    return 0;
}
